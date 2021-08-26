# Partition & Flex

kd木みたいに変形して配置したり、オブジェクト自体を分割して変形させたりするスクリプトです。

現在は **version 1.1** が最新です。

![thumbnail](https://github.com/Aodaruma/Aodaruma-AviUtl-Script/blob/main/Partition%26Flex/partiotionFlexThumbnail.png)

以下のスクリプトが備わっています。

- **オブジェクト配置**

  オブジェクトや個別オブジェクトを、指定範囲内に変形して配置します。
  以下はパラメーターの説明です

  - sizeX
    - X軸方向の範囲を指定します。
  - sizeY
    - Y軸方向の範囲を指定します。
  - grid(%)
    - グリッド状に配置する影響度です。
  - seedAF(%)
    - 分割に用いる乱数のseedを連続的に変化させるパラメーターです。
  - 個別対応
    - 個別オブジェクトの個数に合わせて分割・変形・配置します。
  - 個数(非個別)
    - ↑のパラメーターがoffの時、ここに指定された個数だけ分割します。
  - 変形(%)
    - 元のオブジェクトの形状・配置からどれだけ変化させるか影響度を指定します。
  - 分割解像度
    - 分割を行う乱数のステップを指定します。
  - 間隔
    - 各分割されたオブジェクトそれぞれの間隔を指定します。
  - easing
    - *seedAF(%)* のパラメーターのイージングの種類を指定します。
      使用するときは、`easing.lua`、`easing_aviutl.lua` が必要です。導入方法は[こちら](https://seguimiii.com/aviutl-tech/easingtra)を参照ください。
      もし上述のファイルがない場合・正常に読み込めない場合・不正な値が入力された場合は、*seedAF(%)* はリニアで変形します。
  - seed
    - 分割に用いる乱数のseedです。

- **オブジェクト分割 （補完なし）**

  オブジェクトを分割して、変形させます。

  - 分割数
    - オブジェクトを分割する回数です。$n$ 回分割するごとに $3^n$​ だけ変形部分が増えます。
  - grid(%)
    - グリッド状に変形する影響度です。元に戻す変形と捉えてもらって構いません。
  - seedAF(%)
    - 分割に用いる乱数のseedを連続的に変化させるパラメーターです。
  - 分割解像度
    - 分割を行う乱数のステップを指定します。
  - easing
    - *seedAF(%)* のパラメーターのイージングの種類を指定します。
      使用するときは、`easing.lua`、`easing_aviutl.lua` が必要です。導入方法は[こちら](https://seguimiii.com/aviutl-tech/easingtra)を参照ください。
      もし上述のファイルがない場合・正常に読み込めない場合・不正な値が入力された場合は、*seedAF(%)* はリニアで変形します。
  - seed
    - 分割に用いる乱数のseedです。

## 導入方法 / how to install

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。

## ライセンス / Licence

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。[ここ](https://github.com/Aodaruma/Aodaruma-AviUtl-Script/blob/main/LICENSE)にも書いてあります。

## バグ・意見 / how to report bugs

TwitterのDMに送るか、issueを立ち上げてください。

## 今後の予定

- [ ] オブジェクト分割（補完あり）を開発します*（時期未定）*