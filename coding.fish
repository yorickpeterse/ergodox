#!/usr/bin/env fish

make ergodox_ez:coding

echo 'Reset the Ergodox now'

teensy-loader-cli -w -mmcu=atmega32u4 .build/ergodox_ez_coding.hex
