#!/bin/sh
PORT="8080" #ポート番号
ID="root" #ID
PW="password" #パスワード
SIZE="720x480" #画面サイズ
FRAMERATE="60" #フレームレート
export LD_LIBRARY_PATH=/usr/local/lib
mjpg_streamer \
-i "input_uvc.so -f $FRAMERATE -r $SIZE -d /dev/video0 -y -n" \
-o "output_http.so -w /usr/local/share/mjpg-streamer/www -p $PORT -c $ID:$PW"
