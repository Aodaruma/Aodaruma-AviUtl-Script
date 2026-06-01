# Aodaruma's AviUtl Script

Aodaruma が開発した AviUtl スクリプト群です。
AviUtl scripts developed by Aodaruma

### 別リポジトリにて配布しているスクリプト

-   [3Dobject](https://github.com/Aodaruma/3Dobject)
-   [CameraDisplays](https://github.com/Aodaruma/CameraDisplays)
-   [ClipFigures](https://github.com/Aodaruma/ClipFigures)
-   [CycleAffect](https://github.com/Aodaruma/CycleAffect)
-   [DelayBuffer](https://github.com/Aodaruma/DelayBuffer)
-   [ExpCircle](https://github.com/Aodaruma/expcircle)
-   [FlatShadow](https://github.com/Aodaruma/FlatShadow)
-   [GradationMap(Re)](https://github.com/Aodaruma/GradationMap-Re)
-   [ImageLoader](https://github.com/Aodaruma/ImageLoader)
-   [Light&Shadow](https://github.com/Aodaruma/LightAndShadow)
-   [LoopTextures](https://github.com/Aodaruma/LoopTextures)
-   [MaskingSlider](https://github.com/Aodaruma/MaskingSlider)
-   [Modulator](https://github.com/Aodaruma/Modulator)
-   [OriginalToon](https://github.com/Aodaruma/OriginalToon)
-   [ParallelCamera](https://github.com/Aodaruma/ParallelCamera)
-   [Partition&Flex](https://github.com/Aodaruma/PartitionAndFlex)
-   [PixelSort_A](https://github.com/Aodaruma/PixelSort_A)
-   [Repeater](https://github.com/Aodaruma/Repeater)
-   [RepeatingClip](https://github.com/Aodaruma/RepeatingClip)
-   [RikkyReflection](https://github.com/Aodaruma/RikkyReflection)
-   [ChangeColor](https://github.com/Aodaruma/change-color)
-   [AutoScaleCropping](https://github.com/Aodaruma/AutoCropScaling)
-   [ImageFFT](https://github.com/Aodaruma/ImageFFT)

### 本リポジトリの src 内にて公開しているスクリプト

-   kerning
-   SphereMaterialTest
-   Trackers
-   UVmapping(beta)
-   VariableTrack
-   WipeClipping
-   キャッシュ保存 RM
-   簡易 Glitch++(派生)
-   対角線クリッピング
-   段付き円形
-   抜き出し縁取り
-   平行四辺形

## AviUtl2 対応状況（暫定）

### step1: AviUtl2 版ファイルを追加（2026-05-11）

以下は `.anm2` / `.tra2` を追加し、AviUtl2 で読み込める形にしたものです。

-   `scripts/簡易Glitch++(派生)/簡易Glitch++(派生).anm2`
-   `scripts/段付き円形/段付き円形.anm2`
-   `scripts/VariableTrack/VariableTrack.anm2`
-   `scripts/平行四辺形/平行四辺形.anm2`
-   `scripts/対角線クリッピング/対角線クリッピング.anm2`
-   `scripts/WipeClipping/@WipeClipping.anm2`
-   `scripts/Trackers/@AodTrackers.tra2`

### 未対応（step2 以降）

以下は外部依存（`require("rikky_module")` や DLL）を含むため、単純な拡張子変換では対応できません。

-   `SphereMaterialTest`
-   `キャッシュ保存RM`
-   `抜き出し縁取り`
-   `UVmapping(beta)/@UVmapping_tester.anm` + `UVmapping.dll`
-   `kerning`（`rikky_module` を利用する機能あり）

## インストールの仕方 / how to install

ファイルの種類・拡張子によって導入方法が異なります。
こちらのウェブサイトでは、随時情報が更新されていますので、具体的なインストール方法はこちらを参照してください。

-   [scrapbox.io/AviUtl/スクリプトの導入方法](https://scrapbox.io/aviutl/スクリプトの導入方法)
-   [scrapbox.io/AviUtl/プラグインの導入方法](https://scrapbox.io/aviutl/プラグインの導入方法)

## バグや意見など

Twitter に DM を送るか、issue を立ち上げてもらえれば見ます。

## ライセンス

基本的に LGPL-2.1 Licence に基づきます。
