Intro

# Introduction:
- Android Debug Bridge (adb) is a command line tool 
- Lets you communicate with an emulator or connected Android device. 

# How to get
You can find the adb tool in android sdk/platform-tools or Download ADB Kits.

# ADB Cheat-sheet
## ADB Debugging 
* `adb devices`
* `adb forward`
* `adb kill-server`

## Wireless
* `adb connect`
* `adb usb`

## Package Manager           
* `adb install`
* `adb uninstall`
* `adb shell pm list packages`
* `adb shell pm path`
* `adb shell pm clear`
           
## File Manager
* `adb pull`
* `adb push`
* `adb shell ls`
* `adb shell cd`
* `adb shell rm`
* `adb shell mkdir`
* `adb shell touch`
* `adb shell pwd`
* `adb shell cp`
* `adb shell mv`

## Network
* `adb shell netstat`
* `adb shell ping`
* `adb shell netcfg`
* `adb shell ip`

## Logcat
* `adb logcat`
* `adb shell dumpsys`
* `adb shell dumpstate`
## Screenshot
* `adb shell screencap`
* `adb shell screenrecord` [4.4+]
## System
* `adb root`
* `adb sideload`
* `adb shell ps`
* `adb shell top`
* `adb shell getprop`
* `adb shell setprop`

# Appendix
- adbshell.com, *ADB Shell (2015)* <http://adbshell.com/> [accessed 7 May 2019].