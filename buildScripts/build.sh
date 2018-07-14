#!/bin/sh

BUILD_DIR=../build

cd ../cmake
rm -rf $BUILD_DIR
mkdir $BUILD_DIR
cmake .
make
cd ..