# グラデーションマップ(Re)

無限ギンガさん作の[グラデーションマップ](https://www.nicovideo.jp/watch/sm30253109)のDLL版を、できるだけカスタム性を上げて改良しました。

rikkyさんの[グラデーションエディタ(R)](https://www.nicovideo.jp/watch/sm29113707)を併用すると、とても使いやすくなります。
また、同じくrikkyさんの`rikky_module`プラグインが入っているとちょっと便利になります。

現在は **version 1.01** が最新です。


以下のスクリプトが備わっています。

## @MG_GradationMap_remake

### Saving

グラデーションマップでマッピングに用いる画像を保存します。

以下はパラメーターの説明です。

- **トラックバー/チェックボックス**
  - 保存場所
		- オブジェクトを画像として保存し、その保存場所を指定します。

	- 透明化
		- Savingをかけたオブジェクトを透明にします。

### Reading/Effecting

オブジェクトを保存したマップ画像でグラデーションマップを適用します。

以下はパラメーターの説明です。

- **トラックバー/チェックボックス**
  - 読込場所
    - 0: 
    	- ダイアログの「$ﾌｧｲﾙ1」で指定した画像ファイルを読み込みます。
    	- 無効な画像ファイル(画像サイズが0x0など)の時は、エラーを吐きます
    - 1~100: 
    	- Savingで保存した保存場所の数字を指定します。
	
	- 色相変更
		- Savingで保存したオブジェクトや、指定した画像ファイルの色相を変更します。

	- 取得高さ(%)
		- Savingで保存したオブジェクトや、指定した画像ファイルの、色を取得する高さを指定します。

	- shift
		- Savingで保存したオブジェクトや、指定した画像ファイルの、色の横位置をずらします

	- looping
		- shiftでずらしてもループするようにします(三角波)

- **ダイアログ**

	- $ﾌｧｲﾙ1
		- 読込場所=0のとき、指定されたパスで画像ファイルを読み込みます。
		- このとき、rikky_moduleがあると、「$」を入力するだけでパスを指定できるダイアログが表示されます。

	- 反転
		- Reading/Effectingをかけたオブジェクトの輝度情報を反転させます。

## 導入方法 / how to install

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。

## ライセンス / Licence

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。[ここ](https://github.com/Aodaruma/Aodaruma-AviUtl-Script/blob/main/LICENSE)にも書いてあります。

なお、このスクリプトを改変する際には、次のクレジットを載せていただくと嬉しいです。

credit:
- Original Developer	-	夢幻ギンガ
- DLL Developer		-	rikky
- Improve	Developer	-	Aodaruma

## バグ・意見 / how to report bugs

バグや意見等については、Twitter の DM に送るか、issue を立ち上げてください。

## 変更履歴 / change log

- v1.01 - 配布を Github リポジトリーに変更。説明文を変更しました。
- v1.0 - 正式配布
