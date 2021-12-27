# Pixel Sort

グリッチでお馴染みのエフェクト「Pixel Sort」をAviUtlで使えるようにしたスクリプト・プラグインです。
AviUtlでPixel Sortを実現するエフェクトとしては、自分が開発したスクリプトバージョンと、[SEED264](https://github.com/SEED264)氏開発による[DLLバージョン](https://twitter.com/SEED264/status/906415698330607616)が存在しています。

自分が開発したスクリプトバージョンは、DLLを用いずスクリプトのみでPixel Sortを実現したバージョンです。
そのため、DLLバージョンと比べて処理速度が非常に遅いです。
エフェクトを実用的に使用する際には、DLLバージョンを使用することを推奨します。

### スクリプトバージョン

最新バージョンは、2017/6/2に公開した **version 1.2** です。

#### パラメーター説明

##### トラックバー

- **基準輝度**
  - ソート対象のピクセルの閾値となる輝度を設定します。
- **輝度幅**
  - 基準輝度からの輝度の幅です。双方向からの幅になります。
- **方向**
  - 方向を設定します。
- **引き延ばし**
  - ソート対象のピクセルを引き延ばします。
- **領域幅を確認**
  - ソート対象のピクセルを見ることができます。

##### ダイアログ

- **サイズ**
  - 
- **アルファ判定値**
  - 
- **原型を保持する**
  - 
- **領域ごとにsort**
  - 

### DLLバージョン

SEED264氏の[配布URL](https://twitter.com/SEED264/status/906415698330607616)からダウンロード・インストールしてください。

[リポジトリ](https://github.com/SEED264/PixelSorter_s)も存在しています。

## 導入方法 / how to install

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。

## ライセンス / Licence

[上の階層](https://github.com/Aodaruma/Aodaruma-AviUtl-Script)を参照してください。[ここ](https://github.com/Aodaruma/Aodaruma-AviUtl-Script/blob/main/LICENSE)にも書いてあります。

## バグ・意見 / how to report bugs

Twitter の DM に送るか、issue を立ち上げてください。
