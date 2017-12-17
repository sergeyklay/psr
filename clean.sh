#!/bin/sh

if [ -f Makefile ]; then
	make clean
	phpize --clean
fi

find . -name \*.gcno -o -name \*.gcda -o -name \*.gch | xargs rm -f
find . -name \*.lo -o -name \*.o | xargs rm -f
find . -name \*.la -o -name \*.a | xargs rm -f
find . -name \*.so | xargs rm -f
find . -name .libs -a -type d|xargs rm -rf

rm -f libphp.la modules/* libs/*
git clean -fX

rm -rf autom4te.cache
rm -rf build
rm -rf include
rm -rf modules
