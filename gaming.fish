#!/usr/bin/env fish

cd qmk_firmware
make ergodox_ez:gaming

echo 'Reset the Ergodox now'

teensy-loader-cli -w -mmcu=atmega32u4 .build/ergodox_ez_gaming.hex
