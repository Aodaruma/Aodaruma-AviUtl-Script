# VariableTrack

トラックバーの値を格納し、変数などで活用できるスクリプトです。

現在は **version 1.01** が最新です。

以下のスクリプトが備わっています。

## VariableTrack

### 使用方法

格納された値は、`VT` という配列に次の構造で格納されます。

```lua
VT = {
	"layer1" = {
    {obj.track0, obj.track1, obj.track3, obj.track4},
    {obj.track0, obj.track1, obj.track3, obj.track4},
    ...
  },
  "layer2" = {
    {obj.track0, obj.track1, obj.track3, obj.track4},
    ...
  },
  "layer3" = {...},
  ...
}
```

配列の最初のキーである `"layer1"` 等の文字列キーは、スクリプトが実行されたオブジェクトのレイヤーによって変更されます。例: layer 15で実行→`VT["layer15"]` （なお、`VT.layer15` などのドット+名前で取得することも可能です。）

`VT["layer2"]` 等のテーブルは、キーなしの配列が格納されており、`VT["layer2"][1]` などの数字でテーブルを取得することが可能です。このとき入力する数字は、後ほど説明される「格別格納」で指定されたIDに当たります。

上記で取得した値は、それぞれトラックバーの `A,B,C,D` の順番で格納されています。

### パラメーター説明

以下はパラメーターの説明です。

- **トラックバー/チェックボックス**
  - A
    - 値を格納するトラックバーです。`-99999.9`から`99999.9`まで入力することができます。
  - B
    - 値を格納するトラックバーです。 `-9999.99` から`9999.99`まで入力することができます。
  - C
    - 値を格納するトラックバーです。`-100.0` から `100.0` まで入力することができます。
  - D
    - 値を格納するトラックバーです。`0.0`から`100.0`まで入力することができます。
  
- **ダイアログ**
  - 格別格納
    - 同じレイヤーにあるオブジェクトと被らないように、値を格納するIDを指定します。

## 導入方法 / how to install

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。

## ライセンス / Licence

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。[ここ](https://github.com/Aodaruma/Aodaruma-AviUtl-Script/blob/main/LICENSE)にも書いてあります。

## バグ・意見 / how to report bugs

バグや意見等については、Twitter の DM に送るか、issue を立ち上げてください。

## 変更履歴 / change log

- v1.01 - 配布をGithubリポジトリーに変更。説明文を変更しました。
- v1.0 - 正式配布。
