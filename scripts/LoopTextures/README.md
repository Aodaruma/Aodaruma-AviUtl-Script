# LoopTextures

フォルダーに存在する画像を、連番画像のように読み込みループ再生するスクリプトです。

一部機能を使用するのに、rikky氏開発のrikky_moduleが必要になります。
導入は[ここ](https://hazumurhythm.com/wev/amazon/?script=rikkymodulea2Z)を参照ください。

現在は **version 1.01** が最新です。

以下のスクリプトが備わっています。

## LoopTextures

以下はパラメーターの説明です。

- **トラックバー/チェックボックス**
  
  - ~~0づけ~~
    - 使用されていないパラメーターです。
  - skip
    - 毎画像を何フレーム表示させるか設定します。
  - random
    - 画像の表示順を、取得した順に限らず、ランダムに表示させます。
  - パスを表示する
    - 取得した画像のパスを表示するかどうか設定します。
  
- **ダイアログ**

  - \$ﾌｫﾙﾀﾞ1
  
    - 画像が格納されているフォルダーのパスを設定します。
  
      `rikky_module` が導入されている時、フォルダーのパスが自動的に入力できるダイアログボタンが表示されます。
      正常に導入されているのに表示されない場合、「\$」を入力するとダイアログが出ることがあります。
  
  - 拡張子
  
    - ロードする画像の拡張子を指定します。
  
  - ~~0を最初とする~~
  
    - 使用されていないパラメーターです。
  
  - ランダムを繰り返す
  
    - ランダムな画像の表示順を、画像を表示しきったループ後にも繰り返すようにします。

## 導入方法 / how to install

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。

## ライセンス / Licence

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。[ここ](https://github.com/Aodaruma/Aodaruma-AviUtl-Script/blob/main/LICENSE)にも書いてあります。

## バグ・意見 / how to report bugs

バグや意見等については、Twitter の DM に送るか、issue を立ち上げてください。

## 変更履歴 / change log

- v1.01 - 配布をGithubリポジトリーに変更。説明文を変更しました。
- v1.0 - 正式配布
