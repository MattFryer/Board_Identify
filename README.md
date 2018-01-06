# Board Identify
An Arduino library which allows identification of the make, model and MCU of board/controller which the code was compiled for. 

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
Serial.print(F("Board Make: "));
Serial.println(BoardIdentify::make); 
Serial.print(F("Board Model: "));
Serial.println(BoardIdentify::model); 
Serial.print(F("Board MCU: "));
Serial.println(BoardIdentify::mcu); 
```

Adding this line before the library is included will cause a warning in the compile output window containing the identified board
```cpp
#define BOARD_IDENTIFY_WARNING
```
If warnings still don't display, ensure "File->Preferences->compiler warnings" is set to "Default".
Even doing this, some boards still won't display the warning in the compile window but the constants will still be created.

## Currently Supported Boards
The following boards/controllers are currently supported:

* Arduino/Genuino AVR 
* Arduino SAM
* Arduino SAMD
* Adafruit AVR
* Arduboy
* Digispark
* ESP8266 boards including NodeMCU, SparkFun ESP8266 Thing, WeMos boards and Adafruit ESPino
* ESP32 based boards inlcuding Node32s, Adafruit ESP32 Feather and SparkFun ESP32 Thing
* nRF52832 / nRF51 based boards including BBC micro:bit and RedBearLab boards
* Teensy

The addition of Seeeduino boards is currently being investigated. However, they use the same board identifiers as Arduino/Genuino boards and so it is not clear how to uniquely identify them. 
