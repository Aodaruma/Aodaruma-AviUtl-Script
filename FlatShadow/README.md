# FlatShadow

フラットなロングシャドーを作ることができるスクリプトです。
現在は **version 1.11** が最新です。

![youtube](https://www.youtube.com/watch?v=apWXd0f95eE)

付属のDLLである`AviutlLongShadow.dll`は[rikky氏](https://twitter.com/rikky_mausu)に製作いただけました。

スクリプトには、付属の`AviutlLongShadow.dll`と、 `rikky_module.dll` または `rikky_module.auf` が必要になります。
プラグインの導入は、[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。

以下のスクリプトが備わっています。

## FlatShadow.anm

以下はパラメーターの説明です。

- **トラックバー/チェックボックス**

  - Length
    
    - 影の長さを設定します。
  - Angle
    - 影の角度を設定します。
  - AjustAlp
    - オブジェクトのアルファ値の閾値を設定し、影の滑らかさを調節します。
  - Alpha
    - 影の透明度を設定します。
  - Bidirectional
    - 両方向からの影を生成するかどうか設定します。

- **ダイアログ**

  - 影のみ
    
    - 元のオブジェクトを表示せず、影のみを表示させます。
  - color
    
    - 影の色を設定します。
  - グラデーション
    - 影をグラデーションさせるかどうか設定します。
  - GradColor
    - 影をグラデーションをさせるときに、グラデーションのもう一方の色を設定します。
  - 回転処理
    - オブジェクトのZ軸回転に追尾して、影も回転させるかどうか設定します。
  - 拡張: 上
    - オブジェクトの上方向の領域拡張を行います。
  - 下
    - オブジェクトの下方向の領域拡張を行います。
  - 左
    - オブジェクトの左方向の領域拡張を行います。
  - 右
    - オブジェクトの右方向の領域拡張を行います。

## 導入方法 / how to install

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。

## ライセンス / Licence

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。[ここ](https://github.com/Aodaruma/Aodaruma-AviUtl-Script/blob/main/LICENSE)にも書いてあります。

## バグ・意見 / how to report bugs

いくつかのバグが確認されていますが、今後の修正予定は未定です。
尚、既知のバグは以下のとおりです。

- [ ] `拡張編集 バージョン93rc1`を使用時に、生成される影にグリッチが入る。

その他に確認されたバグ等については、Twitter の DM に送るか、issue を立ち上げてください。

## 貢献者 / Contoributer

敬称略です。

- Aodaruma
- [rikky](https://twitter.com/rikky_mausu)

## 変更履歴 / change log

- v1.11 - 配布をGithubリポジトリーに変更。READMEを追加しました。
- v1.1 - rikky_moduleの更新とともに、AviutlLongShadow.dllを更新。
- v1.0 - スクリプト作成。

