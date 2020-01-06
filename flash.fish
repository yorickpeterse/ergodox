#!/usr/bin/env fish

teensy-loader-cli -w -mmcu=atmega32u4 $argv[1]
