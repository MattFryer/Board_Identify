[![GitHub version](https://img.shields.io/github/release/MattFryer/Board_Identify.svg?logo=github&logoColor=ffffff)](https://github.com/MattFryer/Board_Identify/releases/latest)
[![GitHub Release Date](https://img.shields.io/github/release-date/MattFryer/Board_Identify.svg?logo=github&logoColor=ffffff)](https://github.com/MattFryer/Board_Identify/releases/latest)
[![GitHub download](https://img.shields.io/github/downloads/MattFryer/Board_Identify/total.svg?logo=github&logoColor=ffffff)](https://github.com/MattFryer/Board_Identify/releases/latest)
[![GitHub stars](https://img.shields.io/github/stars/MattFryer/Board_Identify.svg?logo=github&logoColor=ffffff)](https://github.com/MattFryer/Board_Identify/stargazers)
[![GitHub issues](https://img.shields.io/github/issues/MattFryer/Board_Identify.svg?logo=github&logoColor=ffffff)](https://github.com/MattFryer/Board_Identify/issues)
[![Codacy grade](https://img.shields.io/codacy/grade/05e2e79ae90d4b9489689f918ad2ccb5.svg?logo=codacy&logoColor=ffffff)](https://www.codacy.com/app/MattFryer/Board_Identify)
[![GitHub license](https://img.shields.io/github/license/MattFryer/Board_Identify.svg?logo=gnu&logoColor=ffffff)](https://github.com/MattFryer/Board_Identify/blob/master/LICENSE)

# Board Identify
An Arduino library which allows identification of the make, model and MCU of board/controller which the code was compiled for. Currently supports identification of over 100 different boards including all Arduino/Genuino, Teensy, ESP8266, ESP32, BBC micro:bit and Digispark boards.

Please note, some boards share the same identifiers and so can't be distinguished between. When this is the case, both boards will be returned.

## How to Install
For details on how to install libraries in the Arduino IDE, please see the [Arduino website](https://www.arduino.cc/en/Guide/Libraries).

## How to Use
A full example is provided with the library and can be found in the Arduino IDE under "File->Examples->Board_Identify".

Firstly, you must include the library in your sketch:
```cpp
#include <Board_Identify.h>
```

Board Identify uses the namespace "BoardIdentify" to prevent conflicts with other libraries. You can therefor access the board information as follows:
```cpp
Serial.print(F("Board Type: "));
Serial.println(BoardIdentify::type); 
Serial.print(F("Board Make: "));
Serial.println(BoardIdentify::make); 
Serial.print(F("Board Model: "));
Serial.println(BoardIdentify::model); 
Serial.print(F("Board MCU: "));
Serial.println(BoardIdentify::mcu); 
```
It is advised to use BoardIdentofy::type for any logic as it will never be changed and so should maintain future compatibility. 

Adding this line before the library is included will cause a warning in the compile output window containing the identified board:
```cpp
#define BOARD_IDENTIFY_WARNING
```
If warnings still don't display, ensure "File->Preferences->compiler warnings" is set to "Default".

Even doing this, some boards still won't display the warning in the compile window but the constants will still be created.

## Currently Supported Boards
Over 100 boards/controllers are currently supported including:

* All Arduino/Genuino AVR 
* All Arduino SAM
* All Arduino SAMD
* All Adafruit AVR
* All Arduboy
* All Digispark
* ESP8266 boards including NodeMCU, SparkFun ESP8266 Thing, WeMos boards and Adafruit ESPino
* ESP32 based boards inlcuding Node32s, Adafruit ESP32 Feather and SparkFun ESP32 Thing
* nRF52832 / nRF51 based boards including BBC micro:bit and RedBearLab boards
* All Teensy

## Planned Improvements/Changes
For planned changes, improvements and known bugs please visit the [Github issues tracker](https://github.com/MattFryer/Board_Identify/issues).
