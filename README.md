# このパッケージについて

 * このパッケージの内容は大学の授業で制作したものです.
 * 扱い方については下記に示しています.

# パッケージの信用性について

 ![test](https://github.com/ryo0806/ros2_ws/actions/workflows/test.yml/badge.svg)
 * テストプログラムを通過していることを示している.
 * テストを通過している場合は passing　
 * テストを通過していない場合は failing

# 内容について

 * src/mypkg/setup.pyについて
	スクリプト登録, ノード短縮に用いる

 * src/mypkg/mypkg/listener.pyについて
	`talker.py`からデータを受け取り表示するノード

 * src/mypkg/mypkg/talker.pyについて
	トピック名`talker`でトピック通信を行うノード

 * src/mypkg/launch/talk_listen.launch.pyについて
	`talker.py`と`listener.py`のノードを一括で実行するノード

 * src/mypkg/package.xmlについて
	モジュール登録用

 * src/mypkg/test/test.bashについて
	`talker.py`と`listener.py`が通信できているのかをテストするプログラム

 * .github/workflows/test.ymlについて 
	パッケージの信頼性を向上させるバッチ用のプログラム

# パッケージの使用方法

 1.今回はubuntu22.04.1 LTS を用いてパッケージのコピーを行います.ROS2のversionに注意

 2.githubのcodeから`SSH`,`HTTP`のいずれかを選択しリンクをコピーする
　　githubのアカウントがある場合は`SSH`,アカウントがない場合は`HTTPS`

 3.ubuntuのディレクトリ上で`$ git clone SSH`または`$ git clone HTTPS`
   のSSHとHTTPSにコピーしたリンクを貼る

 4.実際にパッケージを用いるためにビルドを行う

 5.`$ colcon build`をros2_ws上で実行する

 6.パッケージを利用可能にするために以下を実行
    `$ source ~/src/mypkg/install/setup.bash`
    `$ source ~/src/mypkg/install/local_setup.bash`

 7.以下のコマンドを入力し, `mypkg`が赤く表示されれば, 成功です.
    `$ source ~/.bashrc`
    `$ ros2 pkg list | grep mypkg`
    ` mypkg`

 8.プログラムを実行する.

# 必要なソフトウェア

 * ROS2 humbel(Ubuntu 22.04用のROS2 version)

# 動作確認済み環境

 * ubuntu 22.04.1 LTS

# 権限について
 
 * このソフトウェアパッケージは, 3条項BSDライセンスの下, 再頒布および使用が許可されます.

 * 詳細はLICENSEをご覧ください.
 
 * © 2022 Ryo Yanagisawa
