無限ギンガさん作のグラデーションマップ[https://www.nicovideo.jp/watch/sm30253109]のDLL版を、できるだけカスタム性を上げて改良しました。
主に自分用です。
rikkyさんのグラデーションエディタ(R)[https://www.nicovideo.jp/watch/sm29113707]とSavingを併用すると、とても使いやすくなります。
また、同じくrikkyさんのrikky_moduleが入っているとちょっと便利になります。

元のスクリプト:
https://www.dropbox.com/s/stqkhv744cymllw/MG_gradmap.zip?dl=0

=====================================
- Saving:
	保存場所:
		オブジェクトを画像として保存し、その保存場所を指定します。

	透明化:
		Savingをかけたオブジェクトを透明にします

- Reading/Effecting:
	読込場所:
		0 -
			ダイアログの「$ﾌｧｲﾙ1」で指定した画像ファイルを読み込みます。
			無効な画像ファイル(画像サイズが0x0)の時は、エラーを吐きます
		1~100 -
			Savingで保存した保存場所の数字を指定します。
	
	色相変更:
		Savingで保存したオブジェクトや、指定した画像ファイルの色相を変更します。

	取得高さ(%):
		Savingで保存したオブジェクトや、指定した画像ファイルの、色を取得する高さを指定します。

	shift:
		Savingで保存したオブジェクトや、指定した画像ファイルの、色の横位置をずらします

	looping:
		shiftでずらしてもループするようにします(三角波)

	$ﾌｧｲﾙ1:
		読込場所=0のとき、指定されたパスで画像ファイルを読み込みます。
		このとき、rikky_moduleがあると、「$」を入力するだけでパスを指定できるダイアログが表示されます。

	反転:
		Reading/Effectingをかけたオブジェクトの輝度情報を反転させます。

=====================================

credit:
	Original Developer	-	夢幻ギンガ
	DLL Developer		-	rikky
	Improve	Developer	-	Aodaruma

バグ・改善点などありましたら、Aodaruma(@Aodaruma_)まで。

Last Edit: 12:06 2018/12/24	