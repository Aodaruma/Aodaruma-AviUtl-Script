# OriginalToon

AviUtl内でオリジナルのトゥーン素材を保存し、輝度情報に応じてトゥーンを適用した画像を作成することができるスクリプトです。

現在は **version 1.01** が最新です。

![youtube](https://www.youtube.com/watch?v=apWXd0f95eE)

https://www.youtube.com/watch?v=apWXd0f95eE

rikky氏制作の `rikky_module.dll`または`rikky_module.auf` があると、自動でアンカーをリセットしたり、スクリプトの動作速度が改善することがあります。

以下のスクリプトが備わっています。

## @OriginalToon.anm

### @SaveToon

トゥーン画像を保存します。

以下はパラメーターの説明です。

- **トラックバー/チェックボックス**
  - classNum
    
    - トゥーン画像のグループIDを指定します。
    
  - toonNum
    - トゥーン画像が、そのグループにどの順番で保存されるか指定します。
    
  - save
    - チェックが入っている時、トゥーン画像を保存します。
    
  

### @Main

保存したトゥーン画像を読み込み、適用されているオブジェクトの輝度情報から、トゥーン適用画像を作成します。

また、GUIからどの輝度範囲にトゥーン画像を適用するか、直感的に操作することができます。
保存されていないトゥーンは、`missing` とGUIに表示されます。

以下はパラメーターの説明です。

- **トラックバー/チェックボックス**
  - classNum

    - トゥーン画像のグループIDを指定します。

  - Areas

    - グループ内の使用するトゥーンの数を指定します。

  - BarSize

    - GUIのバーのサイズを指定します。

  - Reset(1)

    - GUIのバーのアンカーをリセットします。次の値に設定することで、様々なリセット方法を実現できます。

      1: BarSizeで値変更時に、アンカーも自動的に拡大縮小されます。

      2: Resetの時に、各アンカーがバーを等分するようになります。

      3: Areaで値変更時に、アンカーが自動的にリセットされます。

  - showBar

    - バーを表示するかどうか設定します。

- **ダイアログ**

  - ぼかし
    - トゥーンを適用する輝度をぼかし、エッジを柔らかくします。
  - \-\-\-
    - アンカーの位置を保存する配列です。いじるのは非推奨です。

## 導入方法 / how to install

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。

## ライセンス / Licence

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。[ここ](https://github.com/Aodaruma/Aodaruma-AviUtl-Script/blob/main/LICENSE)にも書いてあります。

## バグ・意見 / how to report bugs

確認されたバグ等については、Twitter の DM に送るか、issue を立ち上げてください。

## 変更履歴 / change log

- v1.01 - Githubリポジトリーに移行。READMEを加えました。
- v1.0 - ParallelCamera、正式版作成。
