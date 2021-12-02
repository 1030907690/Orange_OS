#!/bin/bash
make all
make image
sleep 3
echo 'make  command ...'
cd command
make all
make install
echo 'done ...'
bochs -f bochsrc