#!/bin/bash
wget -q https://github.com/eslamibrahim30/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgm.so -O "$PWD/../libgm.so" 
export LD_PRELOAD="$PWD/../libgm.so"
