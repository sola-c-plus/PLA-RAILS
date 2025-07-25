sudo apt update
sudo apt install -y cmake libv4l-dev libjpeg-dev imagemagick
git clone https://github.com/jacksonliam/mjpg-streamer.git
cd mjpg-streamer/mjpg-streamer-experimental
sudo make; sudo make install

sudo nano start_stream.sh
sh start_stream.sh
