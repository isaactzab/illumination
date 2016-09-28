# Zephir installation / Instalacion de Zephir - Debian Jessie


```
git clone https://github.com/phalcon/zephir.git
git clone https://github.com/json-c/json-c.git

sudo apt-get install gcc make re2c phpX phpX-json phpx-dev libpcre3-dev
sudo apt-get install php libapache2-mod-php php-mcrypt php-mysql
sudo add-apt-repository ppa:ondrej/php
sudo apt-get update
sudo apt-get install libjson0 libjson0-dev libjson0-dbg
sudo apt-get install libjson0
sudo apt-get install libjson0-dev
sudo apt-get install libjson0-dbg
sudo apt-get install libjson-glib-1.0-0-dbg
sudo apt-get install re2c
./generate
sudo chmod +x autogen.sh
./autogen.sh
sudo apt-get install autogen
sudo apt-get install install libtool
./configure
./make && make install
./install -c

sudo apt-get install gcc make re2c phpX phpX-json phpx-dev libpcre3-dev
```