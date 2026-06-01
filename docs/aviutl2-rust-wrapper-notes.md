# AviUtl2 向け Rust wrapper 検討メモ

更新日: 2026-05-11

## 結論（現時点）

- `aviutl2-rs` を使った再実装は可能。
- 本リポジトリで DLL/外部モジュール依存のあるスクリプトは、AviUtl2 では `require("xxx")` より `obj.module("xxx")` + `.mod2` へ寄せる方が安全。

## 根拠（一次情報）

- AviUtl2 Lua:
  - `*.anm2/*.obj2/*.cam2/*.scn2/*.tra2` 形式を使用。
  - 文字コードは UTF-8（旧形式は SJIS）。
  - `obj.module(name)` で `.mod2` の関数を取得可能。
- AviUtl2 SDK:
  - プラグイン種別として `.auf2/.aui2/.auo2/.aux2/.mod2` が定義されている。
  - `.mod2` は「各種スクリプトから利用出来る関数群」。
- `aviutl2-rs`:
  - `module` 機能と `register_script_module` マクロがある。
  - ただし作者自身が「まだ不安定で API が大きく変わる可能性あり」と明記。

## このリポジトリへの適用イメージ

### 1) `UVmapping.dll` の移行（優先）

- 現状: `@UVmapping_tester.anm` が `package.cpath` + `require("UVmapping")` で Lua DLL を直読み。
- 移行案:
  1. Rust (`aviutl2-rs`) で `UVmapping.mod2` を作成。
  2. Lua 側を `local uv = obj.module("UVmapping")` 呼び出しに変更。
  3. `make/mapping` 相当 API を module 関数として公開。

### 2) `rikky_module` 依存の段階置換

- 影響スクリプト:
  - `SphereMaterialTest`
  - `キャッシュ保存RM`
  - `抜き出し縁取り`
  - `kerning`（一部機能）
- まずは `image("w/r/c")` 相当のキャッシュ API を `.mod2` で再提供するのが最小。
- `materialdraw` / `camerainfo` は再現難度が高く、必要なら `.auf2` 側の実装も検討。

## 実装時の注意

- AviUtl2 は旧 32bit DLL の互換に制約があるため、x64 前提で再ビルドする。
- `.mod2` は実体が DLL でも拡張子・配置場所（`Script` 配下）を合わせる。
- `aviutl2-rs` は更新が速いので、バージョン固定（`Cargo.lock` と crate version 固定）で管理する。
