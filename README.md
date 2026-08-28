![IMG_6675](https://github.com/user-attachments/assets/0ad98b09-6703-48db-b49a-03584369a2b4)
# 夕顔,松風,若紫 / hiyokochan_f10, hiyokochan_n11, hiyokochan_f10tg 共通 ビルドガイド
夕顔/hiyokochan_f10は以下の特徴を備えるマクロパッドです。
- 格子配列配列の10キー
- 3つのロータリーエンコーダー（プッシュボタン付き）
- ３つのトグルスイッチによる機能変更（レイヤー変更）
- AZ1UBALLを搭載可能
- 現在の機能把握に便利なLED
インジケーター
- 自由に柄など（0.5mm以下の紙など）をあしらえるカスタムプレート（夕顔、松風、若紫のみ）
- ※作例では千代切り紙（バックストリートファクトリー製）を使用した例です。キットには同梱されません。  

ファームウェアはVial対応です。  

vialのソフトウェアから自由にキーマップを変更可能です。




## 必要な物

### キット付属のもの

部品|個数
--|--
hiyokochan_f10/夕顔 基板|x1
トッププレート（アクリル）|x1
ミドルプレート上|x1
ミドルプレート下|x1
カスタムミドルプレート上|x1
カスタムミドルプレート下|x1
ボトムプレート（アクリル）|x1

### 各自用意するもの
部品|個数
--|--
RP2040-ZERO|x1
MX用スイッチソケット|x10
SK6812MINI-E |x13
Millmax（なくても作れます） |x15
高さ2.0mmコンスルー(12ピン) |x2
SMDダイオード |x13
EC12互換ロータリーエンコーダ(プッシュスイッチ付き)※遊舎工房さんの高さ17.5mmの物を想定 |x3
チップ抵抗 2012 1KΩ |x2
MOSFET 50V300mA BSS138 |x1
トグルスイッチ|x3
OLED用ソケット |x1
スペーサー（9mm）|x8
M2ネジ（3−5mm）|x8
M2ネジ（5-8mm）|x8
MXキースイッチ |x10
MXキーキャップ |x10
ロータリーエンコーダーノブ（直径17mmくらいまで）|x3
ゴム脚 |x2〜４
AZ1UBALL |x1(なくても動作します)

部品はTALPKEYBOARDさん、遊舎工房さん、秋月電子通商さん、マルツオンラインさんで調達しています。<br/>
AZ1UBALLについてはパレットシステム様よりご購入願います。https://palette-system.booth.pm/items/4202085
<br/>
<br/>
## 組み立て
基板部分は松風基板を使用して解説していきますが、どのモデルでも内容は同じなので適宜読み替えてください。hiyokochanシリーズとは基板共用なので全く同じです。<br/>
ところどころ別基板の写真が使われいる箇所がありますが、こちらも適宜読み替えて眼の前の基板と照らし合わせて組み立てを行ってください。
<br/>
写真でマイコンが既に付いているものがありますが、組み立て上確認しながらやりたい場合は先にマイコンのはんだ付けをしてから作業すると確実になります。<br/>
但し、はんだ付けに慣れていない場合は、マイコンを付けた状態でLEDやSMDダイオードなど細かい部品は取り付け辛い場合があるため、ここではマイコンを付けない状態を前提として説明をしていきます。<br/>

## 組み立て

LED→SMDダイオード→スイッチソケットの順ではんだ付けします。<br/>
<br/>
<br/>
<br/>

![IMG_5639](https://github.com/user-attachments/assets/3f2c1ec7-6dbe-49a3-aedd-8af592dcd8de)
LED→SMDダイオード→スイッチソケットの順ではんだ付けします。<br/>
<br/>
<br/>
<br/>

### 1.LEDの取り付け
レベルシフト回路にチップ抵抗とMOSFETをはんだ付け→LEDのはんだ付けの準で処理していきます。
#### 1-1.チップ抵抗、MOSFETの取り付け
![](image/480285463-915f73e8-3a22-4d67-ae6d-2d71322a0dd8.jpg)
<br/>
<br/>
<br/>

このチップ抵抗と
![IMG_6976](https://github.com/user-attachments/assets/3d64ee09-0674-4a2f-b3a6-4ccfee5e124c)

<br/>
<br/>

このMOSFETを基板にはんだ付けしていきます。
![IMG_6977](https://github.com/user-attachments/assets/5d748084-6dd7-42fe-8b63-9e23fb46d3f5)

<br/>
<br/>
<br/>

基板裏面の赤枠の部分にはんだ付けしていきます。
![IMG_6978](https://github.com/user-attachments/assets/6da44c1f-37d9-429c-a56c-41e2157881c9)
![IMG_6978](https://github.com/user-attachments/assets/1066a164-ddc4-4c4d-a158-0bed5a185879)

<br/>
<br/>

フラックスを塗布してから青枠のように片側に予備はんだをしていきます。
はんだごてにごく少量はんだを乗せてからパッドにこて先をあて、こて先を少し立てるようにするとはんだが流れて乗りやすくなると思います。
![IMG_6980](https://github.com/user-attachments/assets/d4f99376-4a9d-48b0-a0e3-304a54873160)

<br/>
<br/>

チップ抵抗、MOSFETを設置場所の少し横に置き、ピンセットなどで保持してスッと横にスライドできる状態にしておいてから、
予備はんだをこて先で溶かし部品をスライドさせれば上手く付けられると思います。<br/>
スライドさせたら、はんだごてを離し１−２秒ほど部品をそのまま保持すると上手く行きます。<br/>
はんだごてより先に保持した部品を動かさないように気をつけましょう。
![IMG_6981](https://github.com/user-attachments/assets/292e74ae-63ef-47fd-85d2-b059ce07a822)


<br/>
<br/>

片側がきっちり固定できたら反対側もはんだ付けしていきます。<br/>
![IMG_6982](https://github.com/user-attachments/assets/57217c4a-f415-4bd2-98ba-0d104ec01794)

<br/>
<br/>
<br/>

#### 1-2.LED本体を取り付け
<br/>
<br/>
基板裏面のLED1-LED14の部分にLED本体をはんだ付けしていきます。<br/>

![D1438AEC-C123-4EE8-AD9F-28B62AF59C18_1_105_c](https://github.com/user-attachments/assets/b01ce70b-26af-452e-b86c-6f833be12e88)  


LEDはGnd表記のある右上の位置とLED本体の先が欠けている部分を合わせるように設置し、表面のLight Sideに光る面が向くようになっているか確認の上ではんだ付けしてください。  


![4C1DD246-D908-45A1-B441-B565A9225C9D_1_201_a](https://github.com/user-attachments/assets/abda2830-7115-4a42-a6bf-e7282904eb4c)\
赤丸の部分の欠けている部分と・・<br/>
<br/>
<br/>
![1E685349-B94A-4480-B06B-1E09D8CD7234_1_105_c](https://github.com/user-attachments/assets/e235d5ff-dd6e-4c39-9e30-6a863a82a41b)\
緑枠のGND表記の欠けたような印刷の部分が合うように配置します。
\
\
\
![121CD3D2-01D2-4998-93F1-4753CA7DBC22_1_105_c](https://github.com/user-attachments/assets/82a876e2-4903-47f9-bf64-5f3033610344)<br/>
私はGnd位置のパッドに予備はんだをしてそこを先につけていく事で向き間違いを防止しています。<br/>
<br/>
<br/>
![AACD6369-66F6-41BE-AA8A-B672B2ACE389_1_105_c](https://github.com/user-attachments/assets/1d01bea9-b180-4298-98a7-03b3cce98f46)\
LEDを置くとこのようになるはずです。<br/>
<br/>
<br/>
![A0D3F910-CA83-40D4-AA16-E25D60798242_1_201_a](https://github.com/user-attachments/assets/942b001e-9ffa-49e1-a9d3-2f6d74604570)\
表面から見るとこのように見えます。<br/>
基板表面から見たときに欠けている部分が左上になっているのが正しい取り付け位置です。<br/>
裏面のLED1〜LED16の順番で付けていきます。<br/>
<br/>
<br/>
<br/>
ピンセットなどでLED本体をしっかり固定し、はんだごてで予備はんだを溶かしてはんだ付けします。<br/>
しっかり固定していればはんだが溶けると自然と水平になるので、まっすぐになっていることを確認したらはんだごてを離します。<br/>
この際もLED本体は固定したままにし、はんだごてを離して1−2秒してから固定を解除するようにするとうまく行きます。<br/>
水平になっていなかったりズレたまま固定してしまった場合は、慌てず少し間を置いてから再度ピンセットなどでしっかりと固定した状態ではんだを温め直して修正してください。<br/>
<br/>
同じ要領で全てのLEDのGnd部とLED本体の切り欠き部をはんだ付けしていきます。
<br/>
<br/>
続けてDIｎ、DOut、VCCというように順番にはんだ付けしていきます。
はんだごてにはんだを乗せてからパッドに当てピンの根本から滑らすようにすると綺麗にできると思います。
長い間当てすぎないようにしましょう。1−2秒は大丈夫な気がします。

<br/>
<br/>

### 2.SMDダイオードの取り付け

SMDも同じ要領ではんだ付けしていきます。<br/>
シルク上の線の入った印刷とSMD本体の線の入った向きを合わせるようにはんだ付けしてください。

![DB4F116A-F9F5-444E-9EC8-A703ECAE511F_1_105_c](https://github.com/user-attachments/assets/007c5e54-941a-493c-9743-634721ed3d44)\
赤枠の部分がSMD（ダイオード）の取り付け部分<br/>
<br/>
<br/>
![CCE193B6-B586-407E-80DA-1E26C4CD1A04_1_105_c](https://github.com/user-attachments/assets/2f34d51e-ba56-4fb3-bfbf-2a3016460cdc)\
黄色枠の小さいダイオードを拡大すると・・・<br/>
<br/>
<br/>
![2DDC3A83-5CEF-4921-B0FC-9FF08C35F2C3_1_201_a](https://github.com/user-attachments/assets/03dcead0-b42c-49c8-963d-3cf0ec3464ec)\
小さい赤枠内のように縦線がある部分があり・・<br/>
<br/>
<br/>
![0FC21235-EB95-45D9-B0EF-3D4A4D1A78A4_1_105_c](https://github.com/user-attachments/assets/eb1f0cc7-c559-4efe-9615-61ea2564b7fa)\
基板側の印刷の赤枠内の縦線と向きを合わせて配置します。<br/>
予備はんだも縦線がある方向にしておくと向きを間違いにくいです。<br/>
<br/>
<br/>
![F4365F45-C6CC-42EE-AF02-16164902A7BC_1_105_c](https://github.com/user-attachments/assets/080fff23-a16a-40e8-b451-3bda3460f185)\
緑枠内のようにはんだ付けします。<br/>
<br/>
<br/>
LEDの時と同じ要領で縦線の向きに注意しながら全てのSMDダイオードの片側をはんだ付けしていきます。<br/>
それが出来たら反対側もはんだ付けしていきます。<br/>
<br/>
<br/>
<br/>

### 3.スイッチソケットの取り付け
<br/>
これまでと同じ要領で、予備はんだ→配置→はんだ付けを行っていきます。<br/>
スイッチソケットはパッドも大きくこれまでよりは容易に行えると思います。<br/>
基板を横から見た時に浮きがないか確認しながらやるのが良いと思います。<br/>

<br/>
<br/>
<br/>
<br/>

![IMG_7076](https://github.com/user-attachments/assets/73aafaac-82a4-4145-a90a-f7f581871770)<br/>
<br/>


MXスイッチソケットを取り付けていきます。<br/>
<br/>
緑枠内、赤枠の場所に予備はんだをしていきます。<br/>
要領はこれまでと同じで、フラックスを塗布→はんだを流し込むの順です。<br/>

![IMG_7077](https://github.com/user-attachments/assets/b5a3c895-7141-430e-9302-8483a2070a9b)<br/>

<br/>
赤枠内のように基板全体のスイッチソケット印刷の場所全てに同じように予備はんだをしていきます。<br/>
面積が大きいのでやり易いと思います。<br/>

![IMG_7078](https://github.com/user-attachments/assets/8dfdfbd3-1e32-4696-8c7c-62d920df8bc6)<br/>
<br/>
次にスイッチソケット本体を乗せていきます。<br/>

![IMG_7079](https://github.com/user-attachments/assets/8cb72141-86e1-4702-8b44-efd529bc4beb)<br/>
<br/>
乗せきったら予備はんだをした箇所をはんだごてで温めて溶かし、はんだ付けしていきます。<br/>
はんだを溶かす際、ピンセットなどでソケット本体をしっかり押さえてやることがポイントです。<br/>
浮いてしまった場合は慌てずしっかり押さえながら溶かし直しせば大丈夫です。<br/>

![IMG_7079](https://github.com/user-attachments/assets/80615f80-0fca-4fcd-a86f-ad81147b7305)<br/>
<br/>
片側のはんだ付けが終わったらもう片側にもはんだを流し込みスイッチソケットを固定していきます。<br/>
この際、横側などからしっかり確認をし、ソケットが浮いていないかを確認しながら行ってください。<br/>

![1C21722F-7B80-401F-A5EE-9A62B8A3226A_1_105_c](https://github.com/user-attachments/assets/24aa619d-0496-4643-a042-d86c2d6ca972)\
はんだ付け完了予想図<br/>
<br/>
<br/>
<br/>


### 4.トグルスイッチの取り付け
<br/>
<br/>

トグルスイッチをはんだ付けしていきます。３つ付けます。
![IMG_6999](https://github.com/user-attachments/assets/fbf53ff5-9738-4306-8a47-0292efc8cb3e)
<br/>
<br/>

基板表に取り付け、裏面からはんだ付けしていきます。<br/>
基板表面、TG1,TG2,TG3にそれぞれ１つずつ順番に付けていきます。<br/>
![IMG_7001](https://github.com/user-attachments/assets/de0527ea-8507-435b-b950-60c800adbc39)
<br/>
<br/>
裏面にフラックスを塗布したら、表面からトグルスイッチを基板の穴に合わせ差し込みます。<br/>
まっすぐ傾きがないように基板に対して水平にして固定（テープなどでも可）します。<br/>
![IMG_7002](https://github.com/user-attachments/assets/b0365251-a424-47e5-9c57-f22117c9f95b)
<br/>
<br/>
はんだごてにはんだを少量乗せて・・・
![IMG_7003](https://github.com/user-attachments/assets/3ad38898-30b8-43a6-ae3c-565abb9efc1c)
<br/>
<br/>
裏側の真ん中のピンにはんだを流し込みます<br/>
この時、押し当てたこて先の力でスイッチが斜めにならないようにしっかりと固定して流し込んでください。<br/>
テープなどでガチガチに固めてもよいですが、私は指で上下をしっかり挟んでから中空で流し込んでいます。<br/>
はんだを乗せたこて先でランドを少し温めてからこて先を立てるようにすると、スッと流れていくので指で押さえながらでも可能です。<br/>
フラックスをしっかり塗布しておけばできるはず。<br/>
はんだごてによる火傷に十分注意して最新の注意を払って行ってください。<br/>
![IMG_7004](https://github.com/user-attachments/assets/a332b878-1efd-40af-b6ce-bb12f6af366a)
<br/>
<br/>
正面、左右から水平を確認します。
![IMG_7005](https://github.com/user-attachments/assets/28e49aa7-0e30-4993-8e46-6fd7dd068090)
<br/>
<br/>

水平の確認が取れたら同じ要領で左右のピンにもはんだを流し込んで固定していきます。<br/>
水平になっていない場合、こて先で中央ピンのはんだを再度温め直して修正してください。<br/>
はんだが溶けている間は修正ができます。<br/>
ここで修正をしておかないと後からのリカバリーは非常に難しくなるので、水平確認は確実に行いましょう。<br/>
![IMG_7006](https://github.com/user-attachments/assets/1bbd286a-b478-41a3-bcfd-b5204f6d2627)
<br/>
<br/>

３つのピンの固定が出来たら同じ要領、真ん中→水平確認→左右ピンの順番でTG2、TG3もはんだ付けしていきます。
![IMG_7007](https://github.com/user-attachments/assets/5a849d9c-f1d7-4011-94bb-4814b2ea1ded)
<br/>
<br/>
<br/>




### 5.ロータリーエンコーダーの取り付け
<br/>
<br/>

#### 5-１.Millmaxの取り付け
<br/>
<br/>
Millmaxを使わずに組み立てることも可能です。その場合はこの部分を飛ばし直接ロータリーエンコーダーを取り付けてください。<br/>
Millmaxを１つのロータリーエンコーダーに対して５つ、３つのロータリーエンコーダーを取り付けるので計15個はんだ付けしていきます。<br/>
非常に小さい部品かつ、そこそこ高価なのでなくさないように気をつけて作業してください。<br/>

![IMG_7010](https://github.com/user-attachments/assets/15054044-bcfc-4493-9579-a3180693c7cb)

<br/>
<br/>
オレンジ枠（１つのロータリーエンコーダーの取り付け部）内の、青枠内の上２つ、下３つの穴に”表面”から部品を差し込みます。<br/>
表裏間違えると取り付け出来なくなるので注意してください。<br/>

![IMG_7011](https://github.com/user-attachments/assets/e36241b5-aa96-4afe-8dfd-1e27269ce099)
<br/>
<br/>

こちらは裏側<br/>
黄色枠内−裏側の穴にフラックスを塗布します。<br/>
![IMG_7012](https://github.com/user-attachments/assets/11b46d1d-4b8b-4e46-94b3-69721f66a9a2)
<br/>
<br/>

こちらは表面<br/>
緑枠内−表側の穴に部品を合計5個差し込みます。<br/>
![IMG_7013](https://github.com/user-attachments/assets/0c6fc2dc-d63f-45bb-a84b-1522a1c186a7)
<br/>
<br/>
差し込めたら裏向きにしても外れないようにマスキングテープなどでしっかり固定します。<br/>
![IMG_7014](https://github.com/user-attachments/assets/cf45bb77-c360-4d3c-85c7-e587d2dc0749)
<br/>
<br/>
上下両方とも固定します。<br/>
![IMG_7015](https://github.com/user-attachments/assets/cadc67cd-a510-4f50-a635-b7565d1d78e1)
<br/>
<br/>
テープで固定出来たら裏返します。<br/>
裏側赤枠内の部品が飛び出ている周りのランド部分にこれまでと同じ要領ではんだを流し込み固定します。<br/>
この際、飛び出ている穴にはんだが入ってしまわないように注意してください。<br/>
差し込めなくなってしまいますので。<br/>
![IMG_7016](https://github.com/user-attachments/assets/80ed164e-756a-4df0-b121-7346a80d914f)
<br/>
<br/>
固定ができたら他の２箇所も同じ要領でMillmaxを取り付け→固定していきます。

<br/>
<br/>

#### 5-2.ロータリーエンコーダー本体の取り付け
<br/>
<br/>
<br/>

ロータリーエンコーダー本体を取り付けていきます。<br/>
![06956E3E-A658-4070-9BC7-98FC12AD50D9_1_105_c](https://github.com/user-attachments/assets/876b67ed-1121-4759-beec-994c50483507) <br/>
青枠の部分にEC12互換のロータリーエンコーダーを基板裏面からはんだ付けしてください。<br/>
夕顔は左上のエンコーダーはありません。中央３つのみです。<br/>
<br/>
<br/>

![FDE5BDB6-5C1F-4694-B0D7-9129F3B9C376_1_105_c](https://github.com/user-attachments/assets/c78740a1-4c88-4b3e-a1a9-2385eae2639b) <br/>
その際、写真赤枠部分のツメをある程度広げてから取り付けると楽に出来ます。<br/>
穴の位置に合うように足を多少広げてから刺し込みます。<br/>
差し込む際、上から垂直に力をかけると足が曲がる可能性が高いので、片側をある程度差し込んでからもう片側を調整しながら差し込むと上手くいきます。<br/>
横から見て水平になっているか確認ながらしっかりと差し込みます。<br/>
Millmaxを使わずに直接取り付ける場合は、この時点でマスキングテープなどでしっかりと固定してから、多めのはんだを流し込んでしっかり固定してください。<br/>
<br/>
同じ要領で他の２つも差し込みます。
<br/>
<br/>

![37371505-1016-422E-8FFE-53DCCAFDED60_1_105_c](https://github.com/user-attachments/assets/27711cb3-f30a-4020-913d-aea81e40a16a) <br/>
夕顔は右上のエンコーダーはありません。中央の３つのみです。 <br/>
取り付け後はこのようになります。<br/>
<br/>
<br/>

Millmaxを使う場合はロータリーエンコーダーは脱着が可能ですが、無理やり外したりすると足が折れてしまう可能性があるため頻繁な差し替えは推奨していません。<br/>
使い方によってクリック感のないタイプのエンコーダーに切り替えたり、エンコーダーの位置に普通のスイッチが必要になった際取り外せるようにした仕様です。<br/>
また、使用するエンコーダーノブによっては軸がタイトで無理やり引き抜こうとするとエンコーダー自体もすっぽ抜けてしまう可能性もあるので、注意して取り外しするようにしてください。<br/>
<br/>
<br/>
<br/>

#### 5-3.AZ1UBALLの台の取り付け

![491DFD50-61C6-4778-B75B-11053C33963A_1_105_c](https://github.com/user-attachments/assets/b7a278fa-1c45-47a6-b36e-14ecaac5afa9)\

AZ1UBALLをマウントする為の”台”（青枠内オレンジ枠の部分）をOLED用ソケットを使って作ります。<br/>
AZ1UBALLは高さ2.5mmのコンスルーを使って基板に固定しますが、OLED用ソケットはコンスルーを付ける方とは”逆の”位置に裏面からはんだ付けしてください。<br/>
<br/>
<br/>
<br/>

![6D746D38-D1F0-493A-B5F5-37F72EFCED9E_1_105_c](https://github.com/user-attachments/assets/e08a0f56-c813-42a5-978a-5430d32cd9d2) <br/>

![58DC0DC5-51D2-4341-A366-CE6BC40F6838_1_105_c](https://github.com/user-attachments/assets/8244aff5-a5ba-4269-9f74-bfc0dca34d2e) <br/>

”台”の取り付け位置とコンスルー取り付け位置に注意してください。それぞれ”逆”の位置になります。<br/>
AZ1UBALLはビルドガイドに従って組み立てておいてください。<br/>
https://github.com/palette-system/az1uball.git<br/>

尚、AZ1UBALLは取り付けなくてもマクロパッド自体は動作しますので必要ない場合は取り付けなくてもOKです。<br/>
<br/>
<br/>

![A15033D6-D72B-43E2-932F-A9CADA71EAB5_1_105_c](https://github.com/user-attachments/assets/a49103af-08b4-4af1-bb82-3101559cfed7) <br/>
基板に装着するとこのような形になります。<br/>
<br/>
<br/>



### 6.マイコン(RP2040−ZERO)の取り付け
<br/>
<br/>
マイコンのRP2040−ZEROを取り付けていきます。<br/>
※ここででは取り付け方を説明しますが、マイコンの不良などの可能性もあるため、<br/>
実際のところは後述する、7.マイコンにVialファームウェアを書き込む項目を先にやってから取り付けるほうが懸命です。<br/>
コンスルーを使用しているので最悪の場合取り外して新しいものに交換は出来ますが、<br/>
コンスルーが勿体ないので。<br/>


![IMG_7120](https://github.com/user-attachments/assets/55fef620-5e93-4884-b67a-6b1e555991ed)
<br/>
<br/>


はじめにコンスルーを取り付けます。<br/>
![IMG_7121](https://github.com/user-attachments/assets/b1f98b22-a8a5-48bc-9606-8eb73b9180d7)
<br/>
<br/>

コンスルーには向きがあります。写真の緑枠内ように小さい四角の窓が空いており、コンスルーを平らに置いたとき上より、赤線、青線が示すとおり下よりといったように方向性があります。<br/>
![IMG_7127](https://github.com/user-attachments/assets/a55d3c82-0a8f-4a20-9688-ec92b5cdaef3)
<br/>
<br/>


基板を裏向きにします。<br/>
![IMG_7125](https://github.com/user-attachments/assets/7233ba3b-d9dc-45f2-90da-ac68b045d2b2)<br/>
<br/>
マイコンのピンの並びに合うようにコンスルーをニッパーなどで切断してマイコンをはんだ付けする土台を作っていきます。<br/>
その四角の窓が下よりの向きになるようにコンスルーの向きを整えます。<br/>
<br/>
下向きの窓が基板側になるようにコンスルーを基板の穴に差し込みます。<br/>
![IMG_7128](https://github.com/user-attachments/assets/2692d3d3-6828-441a-9897-5790f578733c)
<br/>
<br/>

このとき、窓がある側面を同じ方向に揃えて差し込みます。写真では手前になるようにしています。揃っていればどちらでも構いません。（たぶん・・）<br/>
![IMG_7129](https://github.com/user-attachments/assets/22d33f41-c5f4-413b-8045-7832c5018533)
<br/>
<br/>

※コンスルーは基板側にははんだ付けしません。はんだ付けしてしまっても問題ありませんが、コンスルーである意味がなくなってしまいます。（取り外せるというのがメリット）<br/>
![IMG_7130](https://github.com/user-attachments/assets/b72b95b3-c892-414c-9faa-02d015765e00)<br/>
<br/>
<br/>

基板に印刷された番号(緑枠)とマイコンの番号（オレンジ枠）を合わせるようにマイコンを差し込みます。BOOT、RESETスイッチがあるほうが裏面（LEDやスイッチソケットがはんだ付けされている面）となります。<br/>
向きに注意してください。<br/>
![IMG_7131](https://github.com/user-attachments/assets/634a2154-5f24-450c-a219-a236af31a195)<br/>
このとき、フラックスを塗布してから差し込むようにしておくと綺麗にできると思います。<br/>
<br/>
<br/>

パッドをはんだごてで温めはんだを流し込んでいきます。<br/>
![IMG_7132](https://github.com/user-attachments/assets/fee5d801-9833-4e3f-bd03-31a76fdc55d3)

![IMG_7133](https://github.com/user-attachments/assets/6bbd0739-4bf9-4915-bb16-1a3f90d9518b)

順番はどこからでも問題ないですが、順番にやっていったほうがやり易いかと思います。<br/>
<br/>
<br/>

はんだ付け完了<br/>
![IMG_7135](https://github.com/user-attachments/assets/f29b6086-e746-4d71-bd4c-ad8c02da6219)<br/>
<br/>
<br/>
<br/>

### 7.マイコン（RP2040-ZERO）へVialファームウェアを書き込む
<br/>
<br/>

マイコンにキーボード（マクロパッド）として動作させる為のプログラムであるファームウェアを書き込みます。<br/>
これをしないとただの素敵なオブジェです。<br/>
本キーボード（マクロパッド）はVialファームウェアで動作するように設計しています。<br/>
vialソフトウェアに関しては別途ご自身のコンピューターへインストールしておいてください。Windows、Mac対応です。<br/>
※これを自分で調べてインストール出来ないようでは本キーボード（マクロパッド）を組み立てて扱うことはまず不可能です。<br/>
そのため、ここでは敢えて説明は割愛します。<br/>
<br/>
<br/>

コンピューターに認識させます。
緑枠内のBOOTと書かれたスイッチを押しながら・・・
![IMG_7135](https://github.com/user-attachments/assets/5ed1a502-34a1-4ff4-b024-cd0c2a46613e)<br/>

![IMG_7136](https://github.com/user-attachments/assets/f6e0ef7e-b5ff-494b-88e6-9fab15779f4a)<br/>
<br/>
<br/>
USB-Cケーブルで対応したコンピューターとマイコンのUSB-C端子を繋ぎます
![IMG_7137](https://github.com/user-attachments/assets/e429bbc7-2ce0-4570-9130-d023f99d2775)<br/>
※この時コンピューター側はUSB-A端子のほうがトラブルになり難いのでそちらを推奨します。（C-Cで動かないことはありませんがケーブルの相性が出やすい為）<br/>
<br/>
<br/>

ここではmacを例に説明しますが、Windowsでも同じです。<br/>
Finder、エクスプローラーなどのファイラーアプリケーションを開き、デバイスの一覧が出る場所を参照します。<br/>
![スクリーンショット 2025-08-28 13 46 29](https://github.com/user-attachments/assets/495127dd-6c2b-4c33-9527-bb3fba222889)<br/>
青枠内のようにRPI-RP2というデバイスが見えていれば、コンピューターにマイコンが正しく認識されているということになります。<br/>
仮にここでデバイスが何も認識されないようであれば、マイコン自体が壊れている可能性が高くなります。（ケーブルという可能性もあり。）<br/>
<br/>
<br/>

表示されている事を前提にオレンジ枠内、用意したファームウェアの.uf2ファイル（hiyokochan_f10_vial.uf2）を緑枠内、当該デバイスツリー上のRPI-RP2アイコンへドラッグ＆ドロップします。<br/>

![スクリーンショット 2025-08-28 13 49 18](https://github.com/user-attachments/assets/2cf3b4e6-16b8-4a9e-9ff5-6b5a20260f8c)<br/>

![IMG_7139](https://github.com/user-attachments/assets/4f16f403-315c-4d3e-8432-95d6c6ef822c)<br/>
エラー等がでなければ正常に書き込みが完了し、Vialソフトウェア上でキーボード（マクロパッド）が認識できるようになります。<br/>
<br/>
<br/>

Vialソフトウェアを開き、緑枠内最上段のキーボード名の部分をクリックすると・・・
![スクリーンショット 2025-08-28 13 51 33](https://github.com/user-attachments/assets/efa3c2f1-6351-438d-a0b8-3dc4ee6c0227)<br/>
<br/>

hiyokochan/matsukazeの名前が選択できるはずです。<br/>
クリックすると・・・<br/>
![IMG_7141](https://github.com/user-attachments/assets/b52fad6a-6c09-493c-84af-719013540ef9)<br/>
<br/>

青枠内のようにキーボード（マクロパッド）のキーの配列の形をしたキーマップが表示されればOKです。<br/>
![スクリーンショット 2025-08-28 13 52 24](https://github.com/user-attachments/assets/5c047a3b-35db-4cc0-b770-553ef8bdd836)<br/>
<br/>
<br/>

これで基板は完成です。<br/>
![IMG_7140](https://github.com/user-attachments/assets/99368468-6655-4802-80bb-7bb92207391d)<br/>
vialソフトウェア上のLightingタブでライティングアニメーションを変更するなどして、全LEDがぺかーーーーーーーー！<br/> 
っと光っていればこれまでの全工程が概ね成功と言えます。お疲れ様でございます。<br/>
続いて、ロータリーエンコーダーも設定したとおりに機能するか確かめましょう。<br/>
Vol＋、Vol−に設定して確認すると分かり易いかと思います。<br/>

トグルスイッチもオンオフしてみて動作するか確認しましょう。
モデルや設定にによって異なりますが原則オン（左側ないし上側にレバーが移動している状態）の本数によってLEDインジケーター（下側ないし中央の３つのLED）の色が変わる仕組みになっています。<br/>

松風/hiyokochan_n11では左側がオフ、右側がオンになっているのでレバーをオン側にした数だけインジケーターの点灯数が変化するか確認してください。<br/>
1本→1個点灯（レイヤー１に遷移）<br/>
2本→2個点灯（レイヤー２に遷移）<br/>
3本→3個点灯（レイヤー３に遷移）<br/>
という動作になれば正常です。<br/>

<br/>
<br/>
<br/>



### 8.ケースの組み立て<br/>
<br/>
<br/>

最後に完成した基板を収めるケースを組み立てていきます。<br/> 

![IMG_7143](https://github.com/user-attachments/assets/48b77268-5ad9-4d88-b39f-990dd993ec45)<br/>


![IMG_7145](https://github.com/user-attachments/assets/ea4c13c2-067e-4e5b-ae53-6a06e2e94eb8)<br/>
<br/>
<br/>

まずボトムプレートの保護シートを剥がします（裏表とも）<br/>
![IMG_7146](https://github.com/user-attachments/assets/3d8bdab9-0fc3-41aa-9bfb-66e1712399a2)<br/>
<br/>

緑枠内の箇所９箇所にスペーサをM2ネジ（5-7mm）を使ってとめていきます。<br/>
![IMG_7147](https://github.com/user-attachments/assets/8e0e1313-fc3a-4699-8d8b-131e588ff830)<br/>
<br/>
<br/>
写真のように表側にスペーサーを置き、裏側からM2ネジでとめます。<br/>
![IMG_7148](https://github.com/user-attachments/assets/f2d89995-7d26-4550-8b5b-ca6bbf668bb6)<br/>
<br/>
<br/>
緑枠内の箇所に同じようにスペーサーをとめていきます。<br/>
![IMG_7149](https://github.com/user-attachments/assets/bb93b2c7-48ff-40ce-93ee-9790f9a963a5)<br/>
<br/>

とめきるとこういう形になります。<br/>
![IMG_7150](https://github.com/user-attachments/assets/f7abbd93-8f37-493f-9acd-5a12eaf797b6)<br/>
<br/>
<br/>

次に完成したボトムプレートに、ミドルプレート（下）を乗せていきます。<br/>
![IMG_7152](https://github.com/user-attachments/assets/63ae1ee0-88f2-4b96-bee8-806a140e47e3)<br/>



乗せるとこういう形になります。<br/>
![IMG_7153](https://github.com/user-attachments/assets/81389320-cbeb-4f02-ba5e-8eac081466ea)<br/>
<br/>

隙間がないようにしっかり差し込んでください。<br/>
![IMG_7154](https://github.com/user-attachments/assets/aa1b5fc9-c2e2-4aa2-a70f-e9af4f91dc79)<br/>
<br/>
<br/>
※上記の差し込みを行う際、固くて差し込みにくい場合は無理せず以下の写真のように<br/>
ミドルプレートの各スペーサ穴をボトムプレートを使って予め差し込みやすくしてから<br/>
全体を差し込むとすんなり入ると思います。<br/>
無理に強行するとアクリルが割れます。<br/>
注意して差し込んでください。<br/>

![IMG_7155](https://github.com/user-attachments/assets/d451e68c-95c6-4c60-9c7d-0b79141ccdcf)<br/>



![IMG_7156](https://github.com/user-attachments/assets/9fa1b6b0-02c0-446a-892a-128f6673a9df)<br/>
<br/>
<br/>

続いて基板を乗せます。<br/>
![IMG_7157](https://github.com/user-attachments/assets/09708884-3350-4949-9768-9daffc594aca)<br/>


写真のように溝に収めます。<br/>
![IMG_7158](https://github.com/user-attachments/assets/aee6350b-5946-47cc-9e49-e0499413692a)
<br/>
<br/>

次にミドルプレート（上）を被せます。
すんなり乗らない場合は、ミドルプレート（下）の時と同じ要領で一度スペーサーを通してから乗せるようにます。<br/>
![IMG_7159](https://github.com/user-attachments/assets/3b2a2458-23de-4130-9e94-4350829d9e3b)
<br/>
<br/>

綺麗に被せるとこのような形になります。<br/>
![IMG_7160](https://github.com/user-attachments/assets/a0879c74-d6fd-4975-9dfa-edc45c7ec378)
<br/>
<br/>

続いてトッププレートをとめていきます。<br/>
![IMG_7161](https://github.com/user-attachments/assets/bc2df46a-3282-40c0-a6eb-6026def9e46b)
<br/>

保護フィルムを剥がして（裏表とも）<br/>
![IMG_7162](https://github.com/user-attachments/assets/2a70d768-3211-474b-b94a-bb4864b4b02b)
<br/>

写真のとおりに最上段に乗せたら<br/>
![IMG_7163](https://github.com/user-attachments/assets/53fbaa4b-1879-48f4-bb74-ba8cd7d45825)
<br/>

M2ネジ（３−５mm）を使って固定していきます。<br/>
![IMG_7164](https://github.com/user-attachments/assets/24d43d66-7bf1-4491-bdf6-11a32f3de467)
<br/>

全てとめたらこのような形になります。<br/>
![IMG_7165](https://github.com/user-attachments/assets/f6dbcefd-46ae-4f79-8bee-bf65c7de16bb)
<br/>
<br/>

最後にお好みのキースイッチを取り付け<br/>
![IMG_7166](https://github.com/user-attachments/assets/9deeed82-a7d5-4773-9863-c8d237e65fbe)
<br/>

キーキャップを取り付け、エンコーダーノブを取り付けたら完成です。<br/>

![IMG_7167](https://github.com/user-attachments/assets/a77a1318-8e2a-4bd2-9b74-7961e81ae299)





必要に応じて後述するミドルプレートを好みに彩ったりと楽しんでいただければと。<br/>
お疲れ様でした！！<br/>
![IMG_7475](https://github.com/user-attachments/assets/9dbe72c9-6e95-4874-b144-b07760048421)

<br/>
<br/>
<br/>

### 9.Extra デコレーションガイド
<br/>
<br/>

ここでは額縁ミドルプレート(夕顔、松風、若紫のみ）を使用する場合の飾り付けのやり方を解説します。<br/>
<br/>

額縁ミドルプレートは上下とも0.5mm以下の薄手のものであれば組み込める額縁のような溝が掘ってあるプレートになっています。<br/>
この溝に溝の蓋をベースに型取りして切り出す事で比較的簡単に好きな柄や色に彩ることができます。<br/>
是非とも好きな柄で楽しんでいただきたい。<br/>
<br/>
<br/>

はじめに切り出す素材を用意します。溝の深さは0.5mmなのでそれ以下のものであればなんでもOK。<br/>
色紙、切り紙、千代紙、包装紙などなど。お好みのものを用意してください。<br/>

![IMG_7173](https://github.com/user-attachments/assets/40298cda-57dc-43f2-bbec-2e633a16ed19)<br/>
<br/>
<br/>

次にテンプレートを本体から切り離します。緑枠の部分がそれです。<br/>
ここではミドルプレート（下）を使って説明しますが、ミドルプレート（上の）場合も同じ要領です。<br/>
![IMG_7174](https://github.com/user-attachments/assets/5bfe2d7d-fbcc-4cdf-92f3-2d4ea85c2700)<br/>
<br/>

オレンジ矢印の指し示す下の部分にピンセットなど平べったく薄い硬めのものを差し込み・・・<br/>
![IMG_7175](https://github.com/user-attachments/assets/8fa6bf1b-39e6-4bef-bbbd-5b6b10e3d5bf)<br/>
赤矢印の方向へ、すくうようにして剥がします。<br/>
向こう側へ押しながらやると綺麗に剥がれると思います。<br/>
<br/>
<br/>

剥がすとこのようになります。<br/>
他の2つも同じように剥がします。<br/>
![IMG_7176](https://github.com/user-attachments/assets/239a944e-22d0-48d4-9d1e-188573ee59c9)<br/>
<br/>
<br/>

剥がしたテンプレートは表と裏があります。<br/> 
こちらが表<br/>
![IMG_7178](https://github.com/user-attachments/assets/71e7e499-8a0d-4425-9294-6c65ede9f77a)<br/>
<br/>

こちらが裏<br/>
![IMG_7179](https://github.com/user-attachments/assets/171344dd-3e2a-4d5d-873a-800702219c7a)<br/>
<br/>
<br/>

切り出したテンプレートの裏側を上にして素材の上に置き、鉛筆などでテンプレートの枠をなぞります。<br/>
この時素材の表にしたい面の向きに注意してください。<br/>
素材の裏側にテンプレートを当てて外形をマークし切り出すイメージです。<br/>
![IMG_7180](https://github.com/user-attachments/assets/32b5d0c8-dd91-453f-bae1-94a94550b82d)<br/>
<br/>
<br/>

外形を描いた状態<br/>
![IMG_7181](https://github.com/user-attachments/assets/28447861-37dc-4c4c-ae05-9e57a57e1a2d)<br/>
<br/>
<br/>

次にハサミなどで外形に沿って切り出します。<br/>
この時外形線をほんの少し残すように微妙に大きめに切るのがポイントです。<br/>
鉛筆などで外形を描いていれば消しゴムで消せるので問題なし。<br/>
![IMG_7182](https://github.com/user-attachments/assets/b6f59d26-af6d-45d5-b6b4-e85fc125c315)<br/>
※実際は裏側になるので線はそのままでも実用上問題にはならないです。<br/>
<br/>
<br/>

切り出したものがこちら。<br/>
![IMG_7183](https://github.com/user-attachments/assets/75e25066-9305-4235-afb0-31a4ee57b77c)<br/>
<br/>
<br/>


![IMG_7185](https://github.com/user-attachments/assets/d5333ba4-4679-41e7-880b-ee7e22a230cf)<br/>
<br/>

ピンセットなどを使って切り出した素材を額縁に収めます。<br/>
![IMG_7186](https://github.com/user-attachments/assets/be2162c2-e047-4af5-b6dc-1c1e1a68243f)<br/>
<br/>
<br/>

微妙に大きく切ることで溝に引っ掛けて落ちないように出来ます。<br/>
あまり大きく切りすぎると入らないので調整しつつ切り出すようにしてください。<br/>
![IMG_7187](https://github.com/user-attachments/assets/0c2c574b-5e81-45f6-a37e-bb06efc5fcaa)<br/>
<br/>
<br/>

しっかりはまるとこういう感じになります。<br/>
他の部分も同じようにしていきます。<br/>
![IMG_7188](https://github.com/user-attachments/assets/043a4cb6-8db9-4e87-87d6-50c78673f3bc)<br/>
<br/>
<br/>
<br/>
<br/>

作例 <br/>
作者は和柄が好きなのでバックストリートファクトリーから発売されている千代切紙を使用して和柄にデコレーションしています。<br/>
色々な柄があり、とても美しいのでおすすめです。<br/>
折り紙としては少々高いですが、その分の価値はあります。<br/>
是非とも色々な組み合わせを試していただきたいです。<br/>
素敵なのが出来上がったらSNS等で共有していただけるととても嬉しいです。<br/>
![IMG_1811](https://github.com/user-attachments/assets/a70d422e-67b8-4ad1-85f9-473922a3fc52)

<br/>
<br/>
<br/>









