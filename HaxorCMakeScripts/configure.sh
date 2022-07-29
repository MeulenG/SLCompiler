#! /bin/sh

mkdir ../build ; cmake -S ../ . -B ../build -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=../Step1_install -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++ -DCMAKE_C_FLAGS="-O3 -march=native -fPIC" -DCMAKE_CXX_FLAGS="-O3 -march=native -fPIC" -DCMAKE_INSTALL_PREFIX=../Step1_install -DCMAKE_INSTALL_LIBDIR=lib -DCMAKE_INSTALL_INCLUDEDIR=include -DCMAKE_INSTALL_BINDIR=bin -DCMAKE_INSTALL_DOCDIR=doc -DCMAKE_INSTALL_INFODIR=info