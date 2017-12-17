#!/bin/sh

sh $(pwd)/clean.sh

export EXTRA_CFLAGS=-Wno-unicode

phpize
./configure
make
