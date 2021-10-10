# WipeClipping

オブジェクトを簡単かつ詳細にリニアワイプさせることができるスクリプトです。

現在は **version 1.11** が最新です。

[![twitter](https://pbs.twimg.com/media/Dnez8adU4AESlvS?format=jpg&name=medium)](https://twitter.com/Aodaruma_/status/1042499697363935233)

以下のスクリプトが備わっています。

## @WipeClipping

### Main

主に使用するスクリプトです。

以下はパラメーターの説明です。

- **トラックバー/チェックボックス**
  - AF-1(%)
    
    - 一つ目の斜めクリッピングを操作します。
    
  - AF-2(%)

    - 二つ目の斜めクリッピングを操作します。

  - Angle

    - 斜めクリッピングの角度を操作します。

  - Width

    - 斜めクリッピングの幅を操作します。

      1. `< 0` のとき
         - 斜めクリッピングのマイナスの値を入力したように、`> 0` の時をマスク反転したようになります。
      2. ` == 0` のとき
         - 角度によって自動で幅を調整します。挙動は `> 0`の時と同じです。
      3. `> 0` のとき
         - 斜めクリッピングを左右でワイプするような挙動をします。

  - info

    - クリッピングの状態を表示するかどうか設定します。


### Option

`Main` のみでは制御しきれないパラメーターを補完するスクリプトです。必ず `Main` より上に設定してください。

以下はパラメーターの説明です。

- **トラックバー/チェックボックス**
  - X
    - クリッピングの中心Xを指定します。
  - Y
    - クリッピングの中心Yを指定します。
  - Blur
    - クリッピングの境界をどれぐらいぼかすか指定します。
  

## 導入方法 / how to install

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。

## ライセンス / Licence

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。[ここ](https://github.com/Aodaruma/Aodaruma-AviUtl-Script/blob/main/LICENSE)にも書いてあります。

## バグ・意見 / how to report bugs

バグや意見等については、Twitter の DM に送るか、issue を立ち上げてください。

## 変更履歴 / change log

- v1.11 - 配布をGithubリポジトリーに変更。説明文を変更しました。
- v1.1 - 拡大縮小するとき、infoおよびクリッピングがずれるバグを修正。
- v1.0 - 正式配布。
