sudo apt update
sudo apt upgrade -y
sudo apt install -y build-essential libtool autotools-dev automake pkg-config bsdmainutils curl git nsis

sudo apt install -y g++-mingw-w64-x86-64

PATH=$(echo "$PATH" | sed -e 's/:\/mnt.*//g') # strip out problematic Windows %PATH% imported var
cd ..
chmod -R 755 Phore
cd Phore
cd depends
make HOST=x86_64-w64-mingw32
cd ..
./autogen.sh
CONFIG_SITE=$PWD/depends/x86_64-w64-mingw32/share/config.site ./configure --disable-tests --prefix=/build-win64
make -j4
sudo make install
