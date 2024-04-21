# Build guide


## Firmware

###  QMK_FIRMWARE
[Here](https://github.com/telzo2000/jisaku20/tree/main/firmware)

<br>

参考<br>

https://github.com/telzo2000/Hello_keyboard/blob/main/readme_about_firmware.md

<br>


## Build 

### 1 Parts check

jisaku20 and jisaku20_right have a front side and a back side.
<br>
jisaku20及びjisaku20_rightには表面と裏面があります。
<br>

Front side

![](img/img00009.jpg)

Back side

![](img/img00011.jpg)


<br>

### 2 Diode soldering

Note! "The diode's silk is wrong and sticks to the surface."
<br>
注意！　ダイオードのシルクが間違って、表面に付いています。
<br><br>

Solder the diodes to the back of each of the left and right.
<br>
左右それぞれの裏面にダイオードのハンダ付けをします。
<br>

There are lead type and SMD diodes.
<br>
ダイオードはリードタイプか、SMDがあります。
<br>
Here, we will explain the lead type soldering.
<br>
ここでは、リードタイプのハンダ付けの説明をします。
<br>

Use a lead bender to bend the legs of the diode.
<br>
リードベンダーを使い、ダイオードの足を曲げます。
<br>
![](img/img00003.jpg)

Insert the diode into the board.
<br>
ダイオードを基板に挿しこみます。
<br>

Please pay attention to the orientation of the diode.
<br>
ダイオードの向きに注意してください。
<br>
![](img/img00028.jpg)


Secure the diode with masking tape, then face up.
<br>
マスキングテープでダイオードを固定してから、表面を上にします。
<br>


Solder the protruding legs.
<br>
はみ出ている足部分に、ハンダ付けをします。
<br>
After soldering, use nippers to cut off the protruding legs.
<br>
はんだ付けが終わったら、はみ出ている足をニッパーで切り取ってください。
<br>
![](img/img00011.jpg)


[８倍速　Diodeハンダ付け動画](https://youtu.be/Yaodh2-XxV4)


<br>
<br>

### 3 Soldering switch sockets


Solder the switch sockets on the back side.
<br>
裏面にスイッチソケットのハンダ付けをします。
<br>
Hold a little solder on the terminals.
<br>
端子に少しハンダを持ってください。
<br>

![](img/img00022.jpg)

Place the switch so that the silk of the switch socket is hidden. Then, warm the solder that you just poured with a soldering iron.
<br>
スイッチソケットのシルクが隠れるようにスイッチを載せてください。そして、先ほど盛ったハンダをハンダゴテで温めてください。
<br>

![](img/img00006.jpg)


Place the switch socket and fix it with a warm soldering iron while melting the solder.
<br>
スイッチソケットを乗せて、温めたハンダゴテで、ハンダを溶かしながら、固定します。
<br>
You can make it easier by working while holding it with tweezers.
<br>
ピンセットで押さえながら、作業をすると楽にできます。
<br>


[８倍速　Switch socketハンダ付け動画](https://youtu.be/E__mHvmIXQo)

<br><br>

### 4 Soldering reset switch & TRRS jack 

![](img/img00013.jpg)

Insert the reset switch on the surface.
<br>
表面にリセットスイッチを挿しこみます。
<br>
Solder the legs of the reset switch from the back.
<br>
裏面からリセットスイッチの足をハンダ付けします。
<br>
Solder the TRRS jack in the same way near the reset switch.
<br>
TRRSジャックは、リセットスイッチの近くに同じようにハンダ付けします。
<br>
Insert the left and right TRRS jacks from the front side and solder from the back side.
<br>
TRRSジャックは左右１箇所ずつ、表面から差し込み、裏面からはんだ付けをしてください。
<br>
![](img/img00026.jpg)


[８倍速　Reset switch,TRRS jackハンダ付け動画](https://youtu.be/3gEbExaOAv4)

<br><br>


### 5　Pro micro 


Use the conthrough to fix the pro micro with the side with the parts facing down.
<br>
pro microの部品のある面を下向きに、コンスルーを使い、固定してください。
<br>


Pay attention to the orientation of the conthrough.
<br>
コンスルーの向きに注意してください。
<br>

![](img/img00027.jpg)

![](img/img00029.jpg)

<br>

### 6　Test

![](img/img00004.jpg)

Please write the firmware and check the operation.
<br>
ファームウェアを書き込んで、動作確認をしてください。
<br>

Install a switch or measure continuity with tweezers, etc.
<br>
スイッチを取り付けるか、ピンセット等で導通をはかるかを行います。
<br>

<br>

### QMK_FIRMWARE
[Here](https://github.com/telzo2000/jisaku20/tree/main/firmware)



<br>

### 7 Installation of switch plate（cherry MX switch）

Prepare a switch plate, M2 spacer 3 mm（x８）, and M2 screw 8 mm（x４）.
<br>
スイッチプレート、M2スペーサー３mm（８本）、M2ネジ８mm（４本）を用意します。
<br>
Fix the screws in 4 places.
<br>
ネジを４箇所、固定します。
<br>
Insert the switch plate into the screw and fix it with a spacer.
<br>
ネジはスイッチプレートをさしこみ、スペーサーで固定します。
<br>

![](img/img00031.jpg)

![](img/img00025.jpg)

Next, insert the switch plate into the PCB and secure it with a spacer on the back of the PCB.
<br>
次に、スイッチプレートをPCBにさしこみ、PCBの裏面でスペーサーで固定します。
<br>
![](img/img00024.jpg)

![](img/img00017.jpg)

### 8 Installation of cover plate


Prepare a cover plate, M2 spacer 8mm（x2）, and M2 screw 3mm（x4）.
<br>
カバープレート、M2スペーサー8mm（2個）、M2ネジ3mm（4本）を用意します。
<br>
Screw the spacer to the cover plate in the same orientation.
<br>
カバープレートに同じ向きで、スペーサーをネジで固定します。
<br>
Then use the remaining screws to attach the cover plate to the PCB.
<br>
次に、残りのネジを使い、カバープレートをPCBに取り付けます。
<br>
There is an orientation of the cover plate, so it is good to check it once before starting work.
<br>
カバープレートの向きがあり、作業前に一度、重ねて確認すると良いです。
<br>
<br>

![](img/img00012.jpg)

![](img/img00023.jpg)

![](img/img00007.jpg)


### 9 Installation of bottom plate 

Prepare the bottom plate and M2 ３mm screws（x４）.
<br>
ボトムプレート、M２ネジ３mm（４本）を用意します。
<br>
Place the bottom plate according to the spacer on the back of the PCB and fix it with screws.
<br>
PCB裏面にあるスペーサーに合わせて、ボトムプレートをのせて、ネジで固定します。
<br>
![](img/img00030.jpg)

### 10 Installation of switch sockets and keycaps　

Insert your favorite switch socket. Be careful not to bend the lead when inserting it.
<br>
お気に入りのスイッチソケットを挿入してください。差し込む際リードが曲がらないように注意してください。
<br>
![](img/img00010.jpg)

Then insert your favorite keycaps.
<br>
次に、お気に入りのキーキャップを挿入してください。
<br>
![](img/img00015.jpg)


![](img/img00001.jpg)

Prepare a TRRS cable or a USB cable.
<br>
TRRSケーブルやUSBケーブルを用意しましょう。
<br>
<br>
Have a fun selfmade keyboard life!
<br>
楽しい自作キーボード生活を!

![](img/img00005.jpg)
