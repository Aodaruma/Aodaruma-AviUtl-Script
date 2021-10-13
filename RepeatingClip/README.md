# RepeatingClip

ループしながらクリッピングを行うスクリプトです。

現在は **version 1.01** が最新です。

[![Twitter](https://pbs.twimg.com/media/DjIHkO3UYAAv6Ot?format=jpg&name=small)](https://twitter.com/Aodaruma_/status/1022888402767601664)

以下のスクリプトが備わっています。

## RepeatingClip

以下はパラメーターの説明です。

- **トラックバー/チェックボックス**
  - 数
    - 画像ループする数です。
  - クリッピング
    - クリッピング数です。
  - 変化率
    - 描画数ごとのクリッピングの変化率です。
  - 方向
    - 描画方向です。1\~4は中心に向いて、5\~8は外側へ向いてクリッピングします。
  - 両方向
    - 両方向へ描画するかどうか設定します。
  
- **ダイアログ**

  - 空白
	  - 描画ごとの空白です。
	- 変化率空白を無効
	  - 変化率で生じた描画間の変化の調整を無効にします。	
	- 回転に付随
	  - オブジェクトのパラメーターの一つ「回転」に基づいて全体回転します。
	- 単色化
	  - クリッピングしている描画画像に単色化をかけます。
	- └ Color
    - 単色化の色を選択します。
  - └ GradColor
    - 単色化のグラデーション色を選択します。この色は外側への色で、空欄にすると無効になります。
  - 仮想バッファ
    - クリッピング画像を仮想バッファに描画します。
  - └ バッファW
    - 仮想バッファの横サイズを指定します。
  - └ バッファH
    - 仮想バッファの縦サイズを指定します。

## 導入方法 / how to install

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。

## ライセンス / Licence

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。[ここ](https://github.com/Aodaruma/Aodaruma-AviUtl-Script/blob/main/LICENSE)にも書いてあります。

## バグ・意見 / how to report bugs

バグや意見等については、Twitter の DM に送るか、issue を立ち上げてください。

## 変更履歴 / change log

- v1.01 - 配布をGithubリポジトリーに変更。説明文を変更しました。
- v1.0 - 正式配布。
