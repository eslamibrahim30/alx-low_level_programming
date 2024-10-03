#!/bin/bash
wget -q -P "/tmp" https://github.com/eslamibrahim30/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgm.so
export LD_PRELOAD="/tmp/libgm.so"
