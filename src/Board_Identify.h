/*
 *  Board_Identify.h
 *  Identify the microcontroller that the code has been compiled for.
 *  Created by Matt Fryer on 2017-10-04.
 *  Licensed under LGPL (free to modify and use as you wish)
 */
 
// NEXT AVAILABLE TYPE: 120

#pragma once

namespace BoardIdentify {
  
	// TEENSYDUINO - For some reason Teensyduino doesn't write the board as a define so we have to use the processor instead
	#if defined(TEENSYDUINO)
		#if defined(__AVR_ATmega32U4__)
			const int type = 109;
			const char* make = "PJRC";
			const char* model = "Teensy 2.0";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
					#warning "Controller: Teensy 2.0" 
			#endif
		#elif defined(__MK20DX128__)      
			const int type = 110;
			const char* make = "PJRC";
			const char* model = "Teensy 3.0";
			const char* mcu = "ARM Cortex M4 48 MHz";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Teensy 3.0"
			#endif
		#elif defined(__MK20DX256__)       
			const int type = 111;
			const char* make = "PJRC";
			const char* model = "Teensy 3.1/3.2";
			const char* mcu = "ARM Cortex M4 72 MHz";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Teensy 3.1/3.2"
			#endif
		#elif defined(__MK64FX512__)       
			const int type = 112;
			const char* make = "PJRC";
			const char* model = "Teensy 3.5";
			const char* mcu = "Arm Cortex M4F 120 MHz";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Teensy 3.5"
			#endif
		#elif defined(__MK66FX1M0__)
			const int type = 113;
			const char* make = "PJRC";
			const char* model = "Teensy 3.6";
			const char* mcu = "Arm Cortex M4F 180 MHz";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Teensy 3.6"
			#endif
		#elif defined(__MKL26Z64__)
			const int type = 114;
			const char* make = "PJRC";		
			const char* model = "Teensy LC";
			const char* mcu = "ARM Cortex M0+ 48 MHz";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Teensy LC"
			#endif
		#elif defined(__AVR_AT90USB1286__)       
			const int type = 115;
			const char* make = "PJRC";
			const char* model = "Teensy++ 2.0";
			const char* mcu = "AT90USB1286";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Teensy++ 2.0"  
			#endif
        #elif defined(__IMXRT1052__) || defined(__IMXRT1062__)    
			const int type = 117;
			const char* make = "PJRC";
			const char* model = "Teensy 4.0";
			const char* mcu = "ARM Cortex-M7 600 MHz";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Teensy 4.0"  
			#endif    
		#else
            const int type = 116;	
            const char* make = "PJRC";
			const char* model = "Unknown Teensyduino";
			const char* mcu = "Unknown";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Unknown Teensyduino"
			#endif
		#endif

	#elif defined(ARDUINO)
		
	// ARDUINO AVR
		#if defined(ARDUINO_AVR_YUN)
			const int type = 1;
			const char* make = "Arduino";
			const char* model = "Arduino Yún";
			const char* mcu = "ATmega32U4";			
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Yún"
			#endif
		#elif defined(ARDUINO_AVR_UNO)
			const int type = 2;
			const char* make = "Arduino";
			const char* model = "Arduino/Genuino Uno";
			const char* mcu = "ATmega328P";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino/Genuino Uno"
			#endif
		#elif defined(ARDUINO_AVR_DUEMILANOVE)
			const int type = 3;
			const char* make = "Arduino";
			const char* model = "Arduino Duemilanove/Diecimila";
			const char* mcu = "ATmega168 / ATmega328P";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Duemilanove/Diecimila"
			#endif
		#elif defined(ARDUINO_AVR_NANO)
			const int type = 4;
			const char* make = "Arduino";
			const char* model = "Arduino Nano";
			const char* mcu = "ATmega168 / ATmega328P";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Nano"
			#endif
		#elif defined(ARDUINO_ARDUINO_AVR_MEGA)
			const int type = 5;
			const char* make = "Arduino";
			const char* model = "Arduino/Genuino Mega";
			const char* mcu = "ATmega1280";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino/Genuino Mega"
			#endif
		#elif defined(ARDUINO_AVR_MEGA2560)
			const int type = 6;
			const char* make = "Arduino";
			const char* model = "Arduino/Genuino Mega 2560";
			const char* mcu = "ATmega2560";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino/Genuino Mega 2560"
			#endif
		#elif defined(ARDUINO_AVR_ADK)
			const int type = 7;
			const char* make = "Arduino";
			const char* model = "Arduino Mega ADK";
			const char* mcu = "ATmega2560";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Mega ADK"
			#endif
		#elif defined(ARDUINO_AVR_LEONARDO)
			const int type = 8;
			const char* make = "Arduino";
			const char* model = "Arduino Leonardo";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Leonardo"
			#endif
		#elif defined(ARDUINO_AVR_LEONARDO_ETH)
			const int type = 9;
			const char* make = "Arduino";
			const char* model = "Arduino Leonardo ETH";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Leonardo ETH"
			#endif
		#elif defined(ARDUINO_AVR_MICRO)
			const int type = 10;
			const char* make = "Arduino";
			const char* model = "Arduino/Genuino Micro";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino/Genuino Micro"
			#endif
		#elif defined(ARDUINO_AVR_ESPLORA)
			const int type = 11;
			const char* make = "Arduino";
			const char* model = "Arduino Esplora";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Esplora"
			#endif
		#elif defined(ARDUINO_AVR_MINI)
			const int type = 12;
			const char* make = "Arduino";
			const char* model = "Arduino Mini";
			const char* mcu = "ATmega168 / ATmega328P";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Mini"
			#endif
		#elif defined(ARDUINO_AVR_ETHERNET)
			const int type = 13;
			const char* make = "Arduino";
			const char* model = "Arduino Ethernet";
			const char* mcu = "ATmega328P";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Ethernet"
			#endif
		#elif defined(ARDUINO_AVR_FIO)
			const int type = 14;
			const char* make = "Arduino";
			const char* model = "Arduino Fio";
			const char* mcu = "ATmega328P";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Fio"
			#endif
		#elif defined(ARDUINO_AVR_BT)
			const int type = 15;
			const char* make = "Arduino";
			const char* model = "Arduino BT";
			const char* mcu = "ATmega168 / ATmega328P";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino BT"
			#endif
		#elif defined(ARDUINO_AVR_LILYPAD_USB)
			const int type = 16;
			const char* make = "Arduino";
			const char* model = "LilyPad Arduino USB";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: LilyPad Arduino USB"
			#endif
		#elif defined(ARDUINO_AVR_LILYPAD)
			const int type = 17;
			const char* make = "Arduino";
			const char* model = "LilyPad Arduino";
			const char* mcu = "ATmega168 / ATmega328P";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: LilyPad Arduino"
			#endif
		#elif defined(ARDUINO_AVR_PRO)
			const int type = 18;
			const char* make = "Arduino";
			const char* model = "Arduino Pro or Pro Mini";
			const char* mcu = "ATmega168 / ATmega328P";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Pro or Pro Mini"
			#endif
		#elif defined(ARDUINO_AVR_NG)
			const int type = 19;
			const char* make = "Arduino";
			const char* model = "Arduino NG or older";
			const char* mcu = "ATmega8 / ATmega168";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino NG or older"
			#endif
		#elif defined(ARDUINO_AVR_ROBOT_CONTROL)
			const int type = 20;
			const char* make = "Arduino";
			const char* model = "Arduino Robot Control";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Robot Control"
			#endif
		#elif defined(ARDUINO_AVR_ROBOT_MOTOR)
			const int type = 21;
			const char* make = "Arduino";
			const char* model = "Arduino Robot Motor";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Robot Motor"
			#endif
		#elif defined(ARDUINO_AVR_GEMMA)
			const int type = 22;
			const char* make = "Arduino / Adafruit";
			const char* model = "Arduino Gemma / Adafruit Gemma 8MHz";
			const char* mcu = "ATtiny85";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Gemma / Adafruit Gemma 8MHz"
			#endif
		#elif defined(ARDUINO_AVR_CIRCUITPLAY)
			const int type = 23;
			const char* make = "Arduino";
			const char* model = "Adafruit Circuit Playground";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Circuit Playground"
			#endif
		#elif defined(ARDUINO_AVR_YUNMINI)
			const int type = 24;
			const char* make = "Arduino";
			const char* model = "Arduino Yún Mini";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Yún Mini"
			#endif
		#elif defined(ARDUINO_AVR_INDUSTRIAL101)
			const int type = 25;
			const char* make = "Arduino";
			const char* model = "Arduino Industrial 101";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Industrial 101"
			#endif
		#elif defined(ARDUINO_AVR_LININO_ONE)
			const int type = 26;
			const char* make = "Arduino";
			const char* model = "Linino One";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Linino One"
			#endif
		#elif defined(ARDUINO_AVR_UNO_WIFI_DEV_ED)
			const int type = 27;
			const char* make = "Arduino";
			const char* model = "Arduino Uno WiFi";
			const char* mcu = "ATmega328P";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Uno WiFi"
			#endif
	// ARDUINO SAM    
		#elif defined(ARDUINO_SAM_DUE)
			const int type = 28;
			const char* make = "Arduino";
			const char* model = "Arduino Due";
			const char* mcu = "ARM Cortex M3";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Due"
			#endif
	//ARDUINO SAMD    
		#elif defined(ARDUINO_SAMD_ZERO)
			const int type = 29;
			const char* make = "Arduino";
			const char* model = "Arduino/Genuino Zero/M0/M0 Pro";
			const char* mcu = "ARM Cortex M0+";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino/Genuino Zero/M0/M0 Pro"
			#endif
		#elif defined(ARDUINO_SAMD_MKR1000)
			const int type = 30;
			const char* make = "Arduino";
			const char* model = "Arduino/Genuino MKR1000";
			const char* mcu = "ARM Cortex M0+";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino/Genuino MKR1000"
			#endif
		#elif defined(ARDUINO_SAMD_MKRZERO)
			const int type = 31;
			const char* make = "Arduino";
			const char* model = "Arduino MKRZERO";
			const char* mcu = "ARM Cortex M0+";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino MKRZERO"
			#endif
		#elif defined(ARDUINO_SAMD_MKRFox1200)
			const int type = 32;
			const char* make = "Arduino";
			const char* model = "Arduino MKR FOX 1200";
			const char* mcu = "ARM Cortex M0+";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino MKR FOX 1200"
			#endif
		#elif defined(ARDUINO_SAMD_MKRGSM1400)
			const int type = 33;
			const char* make = "Arduino";
			const char* model = "Arduino MKR GSM 1400";
			const char* mcu = "ARM Cortex M0+";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino MKR GSM 1400"
			#endif
		#elif defined(ARDUINO_SAMD_MKRWAN1300)
			const int type = 34;
			const char* make = "Arduino";
			const char* model = "Arduino MKR WAN 1300";
			const char* mcu = "ARM Cortex M0+";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino MKR WAN 1300"
			#endif
		#elif defined(ARDUINO_SAMD_CIRCUITPLAYGROUND_EXPRESS)
			const int type = 35;
			const char* make = "Adafruit";
			const char* model = "Adafruit Circuit Playground Express";
			const char* mcu = "ARM Cortex M0+";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Circuit Playground Express"
			#endif
		#elif defined(ARDUINO_SAMD_TIAN)
			const int type = 36;
			const char* make = "Arduino";
			const char* model = "Arduino Tian";
			const char* mcu = "ARM Cortex M0+";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Tian"
			#endif
	// ADAFRUIT AVR
		#elif defined(ARDUINO_AVR_FLORA8)
			const int type = 37;
			const char* make = "Adafruit";
			const char* model = "Adafruit Flora";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Flora"
			#endif
		#elif defined(ARDUINO_AVR_BLUEFRUITMICRO)
			const int type = 38;
			const char* make = "Adafruit";
			const char* model = "Adafruit Bluefruit Micro";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Bluefruit Micro"
			#endif
		#elif defined(ARDUINO_AVR_FEATHER32U4)
			const int type = 39;
			const char* make = "Adafruit";
			const char* model = "Adafruit Feather 32u4";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Feather 32u4"
			#endif
		#elif defined(ARDUINO_AVR_TRINKET3)
			const int type = 40;
			const char* make = "Adafruit";
			const char* model = "Adafruit Trinket 8MHz";
			const char* mcu = "ATtiny85";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Trinket 8MHz"
			#endif
		#elif defined(ARDUINO_AVR_TRINKET5)
			const int type = 41;
			const char* make = "Adafruit";
			const char* model = "Adafruit Trinket 16MHz";
			const char* mcu = "ATtiny85";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Trinket 16MHz"
			#endif
		#elif defined(ARDUINO_AVR_METRO)
			const int type = 42;
			const char* make = "Adafruit";
			const char* model = "Adafruit Metro";
			const char* mcu = "ATmeg328P";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Metro"
			#endif
		#elif defined(ARDUINO_AVR_PROTRINKET5)
			const int type = 43;
			const char* make = "Adafruit";
			const char* model = "Pro Trinket 5V/16MHz (USB)";
			const char* mcu = "ATmeg328P";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Pro Trinket 5V/16MHz (USB)"
			#endif
		#elif defined(ARDUINO_AVR_PROTRINKET3)
			const int type = 44;
			const char* make = "Adafruit";
			const char* model = "Pro Trinket 3V/12MHz (USB)";
			const char* mcu = "ATmeg328P";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Pro Trinket 3V/12MHz (USB)"
			#endif
		#elif defined(ARDUINO_AVR_PROTRINKET5FTDI)
			const int type = 45;
			const char* make = "Adafruit";
			const char* model = "Pro Trinket 5V/16MHz (FTDI)";
			const char* mcu = "ATmeg328P";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Pro Trinket 5V/16MHz (FTDI)"
			#endif
		#elif defined(ARDUINO_AVR_PROTRINKET3FTDI)
			const int type = 46;
			const char* make = "Adafruit";
			const char* model = "Pro Trinket 3V/12MHz (FTDI)";
			const char* mcu = "ATmeg328P";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Pro Trinket 3V/12MHz (FTDI)"
			#endif
		#elif defined(ARDUINO_AVR_ADAFRUIT32U4)
			const int type = 47;
			const char* make = "Adafruit";
			const char* model = "Adafruit 32u4 Breakout";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit 32u4 Breakout"
			#endif
	// ARDUBOY
		#elif defined(ARDUINO_AVR_ARDUBOY)
			const int type = 48;
			const char* make = "Arduboy";
			const char* model = "Arduboy";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduboy"
			#endif
		#elif defined(ARDUINO_AVR_ARDUBOY_DEVKIT)
			const int type = 49;
			const char* make = "Arduboy";
			const char* model = "Arduboy DevKit";
			const char* mcu = "ATmega32U4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduboy DevKit"
			#endif
	// SEEEDUINO - These use arduino AVR board codes. Need to work out how to identify
	// DIGISPARK - Warnings not outputting so need to test further
		#elif defined(ARDUINO_AVR_DIGISPARK)
			const int type = 50;
			const char* make = "Digistump";
			const char* model = "Digispark";
			const char* mcu = "ATtiny85";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Digispark"
			#endif
		#elif defined(ARDUINO_AVR_DIGISPARKPRO)
			const int type = 51;
			const char* make = "Digistump";
			const char* model = "Digispark Pro";
			const char* mcu = "ATtiny167";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Digispark Pro"
			#endif
	// ESP8266
		#elif defined(ARDUINO_ESP8266_ESP01)
			const int type = 52;
			const char* make = "Espressif";
			const char* model = "Generic ESP8266 Module / Core Development Module";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Generic ESP8266 Module / Core Development Module"
			#endif
		#elif defined(ARDUINO_ESP8266_ESP13)
			const int type = 53;
			const char* make = "Doit";
			const char* model = "ESPDuino (ESP-13 Module) / ThaiEasyElec's ESPino";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ESPDuino (ESP-13 Module) / ThaiEasyElec's ESPino"
			#endif
		#elif defined(ARDUINO_ESP8266_ESP12)
			const int type = 54;
			const char* make = "Adafruit";
			const char* model = "Adafruit HUZZAH ESP8266 / ESPino (ESP-12 Module)";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit HUZZAH ESP8266 / ESPino (ESP-12 Module)"
			#endif
		#elif defined(ARDUINO_ESP8266_ESPRESSO_LITE_V1)
			const int type = 55;
			const char* make = "Espert";
			const char* model = "ESPresso Lite 1.0";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ESPresso Lite 1.0"
			#endif
		#elif defined(ARDUINO_ESP8266_ESPRESSO_LITE_V2)
			const int type = 56;
			const char* make = "Espert";
			const char* model = "ESPresso Lite 2.0";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ESPresso Lite 2.0"
			#endif
		#elif defined(ARDUINO_ESP8266_PHOENIX_V1)
			const int type = 57;
			const char* make = "Espert";
			const char* model = "Phoenix 1.0";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Phoenix 1.0"
			#endif
		#elif defined(ARDUINO_ESP8266_PHOENIX_V2)
			const int type = 58;
			const char* make = "Espert";
			const char* model = "Phoenix 2.0";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Phoenix 2.0"
			#endif
		#elif defined(ARDUINO_ESP8266_NODEMCU)
			const int type = 59;
			const char* make = "NodeMCU";
			const char* model = "NodeMCU 0.9/1.0 (ESP-12/12E Module)";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: NodeMCU 0.9/1.0 (ESP-12/12E Module)"
			#endif
		#elif defined(ARDUINO_MOD_WIFI_ESP8266)
			const int type = 60;
			const char* make = "Olimex";
			const char* model = "Olimex MOD-WIFI-ESP8266(-DEV)";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Olimex MOD-WIFI-ESP8266(-DEV)"
			#endif
		#elif defined(ARDUINO_ESP8266_THING)
			const int type = 61;
			const char* make = "EspreSparkFunssif";
			const char* model = "SparkFun ESP8266 Thing";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: SparkFun ESP8266 Thing"
			#endif
		#elif defined(ARDUINO_ESP8266_THING_DEV)
			const int type = 62;
			const char* make = "SparkFun";
			const char* model = "SparkFun ESP8266 Thing Dev";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: SparkFun ESP8266 Thing Dev"
			#endif
		#elif defined(ARDUINO_ESP8266_ESP210)
			const int type = 63;
			const char* make = "Electronic Sweet Peas";
			const char* model = "SweetPea ESP-210";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: SweetPea ESP-210"
			#endif
		#elif defined(ARDUINO_ESP8266_WIFIO)
			const int type = 64;
			const char* make = "Wifio";
			const char* model = "Wifio";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Wifio"
			#endif
		#elif defined(ARDUINO_ESP8266_WEMOS_D1MINI)
			const int type = 65;
			const char* make = "WeMos";
			const char* model = "WeMos D1/D1 R2/mini";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: WeMos D1/D1 R2/mini"
			#endif
		#elif defined(ARDUINO_ESP8266_WEMOS_D1MINIPRO)
			const int type = 118;
			const char* make = "WeMos";
			const char* model = "WeMos D1 mini pro";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: WeMos D1 mini pro"
			#endif	
		#elif defined(ARDUINO_ESP8266_WEMOS_D1MINILITE)
			const int type = 119;
			const char* make = "WeMos";
			const char* model = "WeMos D1 mini lite";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: WeMos D1 mini lite"
			#endif	
		#elif defined(ARDUINO_WIFINFO)
			const int type = 66;
			const char* make = "WifInfo";
			const char* model = "WifInfo";
			const char* mcu = "ESP8266";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: WifInfo"
			#endif
	// ESP32
		#elif defined(ARDUINO_ESP32_DEV)
			const int type = 67;
			const char* make = "Espressif / DFRobot  / Doit";
			const char* model = "ESP32 Dev Module / FireBeetle-ESP32 / DOIT ESP32 DEVKIT V1";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ESP32 Dev Module / FireBeetle-ESP32 / DOIT ESP32 DEVKIT V1"
			#endif
		#elif defined(ARDUINO_ESP32_THING)
			const int type = 68;
			const char* make = "SparkFun";
			const char* model = "SparkFun ESP32 Thing";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: SparkFun ESP32 Thing"
			#endif
		#elif defined(ARDUINO_UBLOX_NINA_W10)
			const int type = 69;
			const char* make = "u-blox";
			const char* model = "u-blox NINA-W10 series (ESP32)";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: u-blox NINA-W10 series (ESP32)"
			#endif
		#elif defined(ARDUINO_WIDORA_AIR)
			const int type = 70;
			const char* make = "Widora";
			const char* model = "Widora AIR";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Widora AIR"
			#endif
		#elif defined(ARDUINO_ESP320)
			const int type = 71;
			const char* make = "Electronic Sweet Peas";
			const char* model = "Electronic SweetPeas - ESP320";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Electronic SweetPeas - ESP320"
			#endif
		#elif defined(ARDUINO_NANO32)
			const int type = 72;
			const char* make = "Gravitech";
			const char* model = "Nano32";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Nano32"
			#endif
		#elif defined(ARDUINO_LOLIN32)
			const int type = 73;
			const char* make = "WeMos";
			const char* model = "LOLIN32";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: LOLIN32"
			#endif
		#elif defined(ARDUINO_Pocket32)
			const int type = 74;
			const char* make = "Dongsen Tech / WeMos ";
			const char* model = "Dongsen Tech Pocket 32 / \"WeMos\" WiFi&Bluetooth Battery";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Dongsen Tech Pocket 32 / \"WeMos\" WiFi&Bluetooth Battery"
			#endif
		#elif defined(ARDUINO_ESPea32)
			const int type = 75;
			const char* make = "AprilBrother";
			const char* model = "ESPea32";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ESPea32"
			#endif
		#elif defined(ARDUINO_QUANTUM)
			const int type = 76;
			const char* make = "Noduino";
			const char* model = "Noduino Quantum";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Noduino Quantum"
			#endif
		#elif defined(ARDUINO_Node32s)
			const int type = 77;
			const char* make = "Node32s";
			const char* model = "Node32s";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Node32s"
			#endif
		#elif defined(ARDUINO_HORNBILL_ESP32_DEV)
			const int type = 78;
			const char* make = "Hornbill";
			const char* model = "Hornbill ESP32 Dev";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Hornbill ESP32 Dev"
			#endif
		#elif defined(ARDUINO_HORNBILL_ESP32_MINIMA)
			const int type = 79;
			const char* make = "Hornbill";
			const char* model = "Hornbill ESP32 Minima";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Hornbill ESP32 Minima"
			#endif
		#elif defined(ARDUINO_INTOROBOT_ESP32_DEV)
			const int type = 80;
			const char* make = "IntoRobot";
			const char* model = "IntoRobot Fig";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: IntoRobot Fig"
			#endif
		#elif defined(ARDUINO_ONEHORSE_ESP32_DEV)
			const int type = 81;
			const char* make = "Onehorse";
			const char* model = "Onehorse ESP32 Dev Module";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Onehorse ESP32 Dev Module"
			#endif
		#elif defined(ARDUINO_FEATHER_ESP32)
			const int type = 82;
			const char* make = "Adafruit";
			const char* model = "Adafruit ESP32 Feather";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit ESP32 Feather"
			#endif
		#elif defined(ARDUINO_NodeMCU)//-32S
			const int type = 83;
			const char* make = "NodeMCU";
			const char* model = "NodeMCU-32S";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: NodeMCU-32S"
			#endif
		#elif defined(ARDUINO_MH_ET_LIVE_ESP32DEVKIT)
			const int type = 84;
			const char* make = "MH Electronic Technology";
			const char* model = "MH ET LIVE ESP32DevKIT";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: MH ET LIVE ESP32DevKIT"
			#endif
		#elif defined(ARDUINO_MH_ET_LIVE_ESP32MINIKIT)
			const int type = 85;
			const char* make = "MH Electronic Technology";
			const char* model = "MH ET LIVE ESP32MiniKit";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: MH ET LIVE ESP32MiniKit"
			#endif
		#elif defined(ARDUINO_esp32vn)//-iot-uno
			const int type = 86;
			const char* make = "ESP32vn";
			const char* model = "ESP32vn IoT Uno";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ESP32vn IoT Uno"
			#endif
		#elif defined(ARDUINO_ESP32)//-EVB
			const int type = 87;
			const char* make = "Olimex";
			const char* model = "OLIMEX ESP32-EVB / ESP32-GATEWAY";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: OLIMEX ESP32-EVB / ESP32-GATEWAY"
			#endif
		#elif defined(ARDUINO_ESPino32)
			const int type = 88;
			const char* make = "ThaiEasyElec";
			const char* model = "ThaiEasyElec's ESPino32";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ThaiEasyElec's ESPino32"
			#endif
		#elif defined(ARDUINO_M5Stack)//-Core-ESP32
			const int type = 89;
			const char* make = "M5Stack";
			const char* model = "M5Stack-Core-ESP32";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: M5Stack-Core-ESP32"
			#endif
		#elif defined(ARDUINO_Heltec_WIFI_Kit_32)
			const int type = 90;
			const char* make = "Heltec";
			const char* model = "Heltec_WIFI_Kit_32";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Heltec_WIFI_Kit_32"
			#endif
		#elif defined(ARDUINO_Heltec_WIFI_LoRa_32)
			const int type = 91;
			const char* make = "Heltec";
			const char* model = "Heltec_WIFI_LoRa_32";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Heltec_WIFI_LoRa_32"
			#endif
		#elif defined(ARDUINO_ESPECTRO32)
			const int type = 92;
			const char* make = "Makestro";
			const char* model = "ESPectro32";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ESPectro32"
			#endif
		#elif defined(ARDUINO_CoreESP32)
			const int type = 93;
			const char* make = "Microduino";
			const char* model = "Microduino-CoreESP32";
			const char* mcu = "ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Microduino-CoreESP32"
			#endif
	// nRF52832 / nRF51
		#elif defined(ARDUINO_GENERIC) // Seems rather dangerous!!
			const int type = 94;
			const char* make = "Generic / Nordic Semiconductor";
			const char* model = "Generic nRF51/nRF52 / Nordic nRF51 Dongle (PCA10031)";
			const char* mcu = "ARM Cortex M4 / M0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Generic nRF51/nRF52 / Nordic nRF51 Dongle (PCA10031)"
			#endif
		#elif defined(ARDUINO_ELECTRONUT_BLUEY)
			const int type = 95;
			const char* make = "Electronut labs";
			const char* model = "Electronut labs bluey";
			const char* mcu = "ARM Cortex M4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Electronut labs bluey"
			#endif
		#elif defined(ARDUINO_RB_BLEND_2)
			const int type = 96;
			const char* make = "RedBearLab";
			const char* model = "RedBear Blend 2";
			const char* mcu = "ARM Cortex M4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: RedBear Blend 2"
			#endif
		#elif defined(ARDUINO_RB_BLE_NANO_2)
			const int type = 97;
			const char* make = "RedBearLab";
			const char* model = "RedBear BLE Nano 2";
			const char* mcu = "ARM Cortex M4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: RedBear BLE Nano 2"
			#endif
		#elif defined(ARDUINO_NRF52_DK)
			const int type = 98;
			const char* make = "Nordic Semiconductor";
			const char* model = "Nordic Semiconductor nRF52 DK";
			const char* mcu = "ARM Cortex M4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Nordic Semiconductor nRF52 DK"
			#endif
		#elif defined(ARDUINO_STCT_NRF52_minidev)
			const int type = 99;
			const char* make = "Taida Century";
			const char* model = "Taida Century nRF52 mini board";
			const char* mcu = "ARM Cortex M4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Taida Century nRF52 mini board"
			#endif
		#elif defined(ARDUINO_BBC_MICROBIT)
			const int type = 100;
			const char* make = "BBC";
			const char* model = "BBC micro:bit";
			const char* mcu = "ARM Cortex M0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: BBC micro:bit"
			#endif
		#elif defined(ARDUINO_BLUZ_DK)
			const int type = 101;
			const char* make = "Bluz / OSHChip";
			const char* model = "Bluz DK / OSHChip";
			const char* mcu = "ARM Cortex M0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Bluz DK / OSHChip"
			#endif
		#elif defined(ARDUINO_PCA1000X)
			const int type = 102;
			const char* make = "Nordic Semiconductor";
			const char* model = "Nordic nRF51X22 Development Kit(PCA1000X)";
			const char* mcu = "ARM Cortex M0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Nordic nRF51X22 Development Kit(PCA1000X)"
			#endif
		#elif defined(ARDUINO_BOARD_PCA20006)
			const int type = 103;
			const char* make = "Nordic Semiconductor";
			const char* model = "Nordic Beacon Kit (PCA20006)";
			const char* mcu = "ARM Cortex M0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Nordic Beacon Kit (PCA20006)"
			#endif
		#elif defined(ARDUINO_TINYBLE)
			const int type = 104;
			const char* make = "Seeed";
			const char* model = "TinyBLE";
			const char* mcu = "ARM Cortex M0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: TinyBLE"
			#endif
		#elif defined(ARDUINO_BLE_NANO)
			const int type = 105;
			const char* make = "RedBearLab";
			const char* model = "RedBearLab BLE Nano";
			const char* mcu = "ARM Cortex M0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: RedBearLab BLE Nano"
			#endif
		#elif defined(ARDUINO_REDBEARLAB_NRF51822)
			const int type = 106;
			const char* make = "RedBearLab";
			const char* model = "RedBearLab nRF51822";
			const char* mcu = "ARM Cortex M0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: RedBearLab nRF51822"
			#endif
		#elif defined(ARDUINO_WAVESHARE_BLE400)
			const int type = 107;
			const char* make = "Waveshare Electronics";
			const char* model = "Waveshare BLE400";
			const char* mcu = "ARM Cortex M0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Waveshare BLE400"
			#endif
		#elif defined(ARDUINO_NG_BEACON)
			const int type = 108;
			const char* make = "ng-beacon";
			const char* model = "ng-beacon";
			const char* mcu = "ARM Cortex M0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ng-beacon"
			#endif
		#else
			const int type = 0;
			const char* make = "Unknown";	
			const char* model = "Unknown";
			const char* mcu = "Unknown";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Unknown Controller Model"
			#endif
		#endif

	#else
		const int type = 0;
		const char* make = "Unknown";
		const char* model = "Unknown";
		const char* mcu = "Unknown";
		#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Unknown Controller Type"
		#endif
	#endif
}
