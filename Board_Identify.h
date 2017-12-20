/*
 *  Board_Identify.h
 *  Identify the microcontroller that the code has been compiled for.
 *  Created by Matt Fryer on 2017-10-04.
 *  Licensed under LGPL (free to modify and use as you wish)
 */

//#define BOARD_IDENTIFY_WARNING

namespace boardIdentify {
  
	// TEENSYDUINO - For some reason Teensyduino doesn't write the board as a define so we have to use the processor instead
	#if defined(TEENSYDUINO)
		#if defined(__AVR_ATmega32U4__)
			const char* model = "Teensy 2.0";
			#if defined(BOARD_IDENTIFY_WARNING) 
					#warning "Controller: Teensy 2.0" 
			#endif
		#elif defined(__MK20DX128__)       
			const char* model = "Teensy 3.0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Teensy 3.0"
			#endif
		#elif defined(__MK20DX256__)       
			const char* model = "Teensy 3.1/3.2";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Teensy 3.1/3.2"
			#endif
		#elif defined(__MK64FX512__)       
			const char* model = "Teensy 3.5";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Teensy 3.5"
			#endif
		#elif defined(__MK66FX1M0__)       
			const char* model = "Teensy 3.6";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Teensy 3.6"
			#endif
		#elif defined(__MKL26Z64__)       
			const char* model = "Teensy LC";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Teensy LC"
			#endif
		#elif defined(__AVR_AT90USB1286__)       
			const char* model = "Teensy++ 2.0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Teensy++ 2.0"  
			#endif
		#elif defined(__MK66FX1M0__)
			const char* model = "Teensy++ 3.0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Teensy++ 3.0"
			#endif
		#else
			const char* model = "Unknown Teensyduino";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Unknown Teensyduino"
			#endif
		#endif

	#elif defined(ARDUINO)
		
	// ARDUINO AVR
		#if defined(ARDUINO_AVR_YUN)
			const char* model = "Arduino Yún";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Yún"
			#endif
		#elif defined(ARDUINO_AVR_UNO)
			const char* model = "Arduino/Genuino Uno";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino/Genuino Uno"
			#endif
		#elif defined(ARDUINO_AVR_DUEMILANOVE)
			const char* model = "Arduino Duemilanove/Diecimila";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Duemilanove/Diecimila"
			#endif
		#elif defined(ARDUINO_AVR_NANO)
			const char* model = "Arduino Nano";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Nano"
			#endif
		#elif defined(ARDUINO_ARDUINO_AVR_MEGA)
			const char* model = "Arduino/Genuino Mega";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino/Genuino Mega"
			#endif
		#elif defined(ARDUINO_AVR_MEGA2560)
			const char* model = "Arduino/Genuino Mega 2560";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino/Genuino Mega 2560"
			#endif
		#elif defined(ARDUINO_AVR_ADK)
			const char* model = "Arduino Mega ADK";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Mega ADK"
			#endif
		#elif defined(ARDUINO_AVR_LEONARDO)
			const char* model = "Arduino Leonardo";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Leonardo"
			#endif
		#elif defined(ARDUINO_AVR_LEONARDO_ETH)
			const char* model = "Arduino Leonardo ETH";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Leonardo ETH"
			#endif
		#elif defined(ARDUINO_AVR_MICRO)
			const char* model = "Arduino/Genuino Micro";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino/Genuino Micro"
			#endif
		#elif defined(ARDUINO_AVR_ESPLORA)
			const char* model = "Arduino Esplora";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Esplora"
			#endif
		#elif defined(ARDUINO_AVR_MINI)
			const char* model = "Arduino Mini";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Mini"
			#endif
		#elif defined(ARDUINO_AVR_ETHERNET)
			const char* model = "Arduino Ethernet";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Ethernet"
			#endif
		#elif defined(ARDUINO_AVR_FIO)
			const char* model = "Arduino Fio";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Fio"
			#endif
		#elif defined(ARDUINO_AVR_BT)
			const char* model = "Arduino BT";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino BT"
			#endif
		#elif defined(ARDUINO_AVR_LILYPAD_USB)
			const char* model = "LilyPad Arduino USB";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: LilyPad Arduino USB"
			#endif
		#elif defined(ARDUINO_AVR_LILYPAD)
			const char* model = "LilyPad Arduino";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: LilyPad Arduino"
			#endif
		#elif defined(ARDUINO_AVR_PRO)
			const char* model = "Arduino Pro or Pro Mini";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Pro or Pro Mini"
			#endif
		#elif defined(ARDUINO_AVR_NG)
			const char* model = "Arduino NG or older";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino NG or older"
			#endif
		#elif defined(ARDUINO_AVR_ROBOT_CONTROL)
			const char* model = "Arduino Robot Control";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Robot Control"
			#endif
		#elif defined(ARDUINO_AVR_ROBOT_MOTOR)
			const char* model = "Arduino Robot Motor";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Robot Motor"
			#endif
		#elif defined(ARDUINO_AVR_GEMMA)
			const char* model = "Arduino Gemma";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Gemma"
			#endif
		#elif defined(ARDUINO_AVR_CIRCUITPLAY)
			const char* model = "Adafruit Circuit Playground";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Circuit Playground"
			#endif
		#elif defined(ARDUINO_AVR_YUNMINI)
			const char* model = "Arduino Yún Mini";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Yún Mini"
			#endif
		#elif defined(ARDUINO_AVR_INDUSTRIAL101)
			const char* model = "Arduino Industrial 101";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Industrial 101"
			#endif
		#elif defined(ARDUINO_AVR_LININO_ONE)
			const char* model = "Linino One";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Linino One"
			#endif
		#elif defined(ARDUINO_AVR_UNO_WIFI_DEV_ED)
			const char* model = "Arduino Uno WiFi";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Uno WiFi"
			#endif
	// ARDUINO SAM    
		#elif defined(ARDUINO_SAM_DUE)
			const char* model = "Arduino Due";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Due"
			#endif
	//ARDUINO SAMD    
		#elif defined(ARDUINO_SAMD_ZERO)
			const char* model = "Arduino/Genuino Zero/M0/M0 Pro";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino/Genuino Zero/M0/M0 Pro"
			#endif
		#elif defined(ARDUINO_SAMD_MKR1000)
			const char* model = "Arduino/Genuino MKR1000";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino/Genuino MKR1000"
			#endif
		#elif defined(ARDUINO_SAMD_MKRZERO)
			const char* model = "Arduino MKRZERO";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino MKRZERO"
			#endif
		#elif defined(ARDUINO_SAMD_MKRFox1200)
			const char* model = "Arduino MKR FOX 1200";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino MKR FOX 1200"
			#endif
		#elif defined(ARDUINO_SAMD_MKRGSM1400)
			const char* model = "Arduino MKR GSM 1400";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino MKR GSM 1400"
			#endif
		#elif defined(ARDUINO_SAMD_MKRWAN1300)
			const char* model = "Arduino MKR WAN 1300";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino MKR WAN 1300"
			#endif
		#elif defined(ARDUINO_SAMD_CIRCUITPLAYGROUND_EXPRESS)
			const char* model = "Adafruit Circuit Playground Express";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Circuit Playground Express"
			#endif
		#elif defined(ARDUINO_SAMD_TIAN)
			const char* model = "Arduino Tian";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduino Tian"
			#endif
	// ADAFRUIT AVR
		#elif defined(ARDUINO_AVR_FLORA8)
			const char* model = "Adafruit Flora";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Flora"
			#endif
		#elif defined(ARDUINO_AVR_BLUEFRUITMICRO)
			const char* model = "Adafruit Bluefruit Micro";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Bluefruit Micro"
			#endif
		#elif defined(ARDUINO_AVR_FEATHER32U4)
			const char* model = "Adafruit Feather 32u4";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Feather 32u4"
			#endif
		#elif defined(ARDUINO_AVR_TRINKET3)
			const char* model = "Adafruit Trinket 8MHz";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Trinket 8MHz"
			#endif
		#elif defined(ARDUINO_AVR_TRINKET5)
			const char* model = "Adafruit Trinket 16MHz";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Trinket 16MHz"
			#endif
		#elif defined(ARDUINO_AVR_METRO)
			const char* model = "Adafruit Metro";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit Metro"
			#endif
		#elif defined(ARDUINO_AVR_PROTRINKET5)
			const char* model = "Pro Trinket 5V/16MHz (USB)";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Pro Trinket 5V/16MHz (USB)"
			#endif
		#elif defined(ARDUINO_AVR_PROTRINKET3)
			const char* model = "Pro Trinket 3V/12MHz (USB)";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Pro Trinket 3V/12MHz (USB)"
			#endif
		#elif defined(ARDUINO_AVR_PROTRINKET5FTDI)
			const char* model = "Pro Trinket 5V/16MHz (FTDI)";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Pro Trinket 5V/16MHz (FTDI)"
			#endif
		#elif defined(ARDUINO_AVR_PROTRINKET3FTDI)
			const char* model = "Pro Trinket 3V/12MHz (FTDI)";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Pro Trinket 3V/12MHz (FTDI)"
			#endif
		#elif defined(ARDUINO_AVR_ADAFRUIT32U4)
			const char* model = "Adafruit 32u4 Breakout";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit 32u4 Breakout"
			#endif
	// ARDUBOY
		#elif defined(ARDUINO_AVR_ARDUBOY)
			const char* model = "Arduboy";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduboy"
			#endif
		#elif defined(ARDUINO_AVR_ARDUBOY_DEVKIT)
			const char* model = "Arduboy DevKit";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Arduboy DevKit"
			#endif
	// SEEEDUINO - These use arduino AVR board codes. Need to work out how to identify
	// DIGISPARK - Warnings not outputting so need to test further
		#elif defined(ARDUINO_AVR_DIGISPARK)
			const char* model = "Digispark";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Digispark"
			#endif
		#elif defined(ARDUINO_AVR_DIGISPARKPRO)
			const char* model = "Digispark Pro";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Digispark Pro"
			#endif
	// ESP8266
		#elif defined(ARDUINO_ESP8266_ESP01)
			const char* model = "Generic ESP8266 Module / Core Development Module";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Generic ESP8266 Module / Core Development Module"
			#endif
		#elif defined(ARDUINO_ESP8266_ESP13)
			const char* model = "ESPDuino (ESP-13 Module) / ThaiEasyElec's ESPino";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ESPDuino (ESP-13 Module) / ThaiEasyElec's ESPino"
			#endif
		#elif defined(ARDUINO_ESP8266_ESP12)
			const char* model = "Adafruit HUZZAH ESP8266 / ESPino (ESP-12 Module)";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit HUZZAH ESP8266 / ESPino (ESP-12 Module)"
			#endif
		#elif defined(ARDUINO_ESP8266_ESPRESSO_LITE_V1)
			const char* model = "ESPresso Lite 1.0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ESPresso Lite 1.0"
			#endif
		#elif defined(ARDUINO_ESP8266_ESPRESSO_LITE_V2)
			const char* model = "ESPresso Lite 2.0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ESPresso Lite 2.0"
			#endif
		#elif defined(ARDUINO_ESP8266_PHOENIX_V1)
			const char* model = "Phoenix 1.0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Phoenix 1.0"
			#endif
		#elif defined(ARDUINO_ESP8266_PHOENIX_V2)
			const char* model = "Phoenix 2.0";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Phoenix 2.0"
			#endif
		#elif defined(ARDUINO_ESP8266_NODEMCU)
			const char* model = "NodeMCU 0.9/1.0 (ESP-12/12E Module)";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: NodeMCU 0.9/1.0 (ESP-12/12E Module)"
			#endif
		#elif defined(ARDUINO_MOD_WIFI_ESP8266)
			const char* model = "Olimex MOD-WIFI-ESP8266(-DEV)";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Olimex MOD-WIFI-ESP8266(-DEV)"
			#endif
		#elif defined(ARDUINO_ESP8266_THING)
			const char* model = "SparkFun ESP8266 Thing";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: SparkFun ESP8266 Thing"
			#endif
		#elif defined(ARDUINO_ESP8266_THING_DEV)
			const char* model = "SparkFun ESP8266 Thing Dev";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: SparkFun ESP8266 Thing Dev"
			#endif
		#elif defined(ARDUINO_ESP8266_ESP210)
			const char* model = "SweetPea ESP-210";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: SweetPea ESP-210"
			#endif
		#elif defined(ARDUINO_ESP8266_WIFIO)
			const char* model = "Wifio";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Wifio"
			#endif
		#elif defined(ARDUINO_ESP8266_WEMOS_D1MINI)
			const char* model = "WeMos D1/D1 R2/mini";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: WeMos D1/D1 R2/mini"
			#endif
		#elif defined(ARDUINO_WIFINFO)
			const char* model = "WifInfo";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: WifInfo"
			#endif
	// ESP32
		#elif defined(ARDUINO_ESP32_DEV)
			const char* model = "ESP32 Dev Module / FireBeetle-ESP32 / DOIT ESP32 DEVKIT V1";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ESP32 Dev Module / FireBeetle-ESP32 / DOIT ESP32 DEVKIT V1"
			#endif
		#elif defined(ARDUINO_ESP32_THING)
			const char* model = "SparkFun ESP32 Thing";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: SparkFun ESP32 Thing"
			#endif
		#elif defined(ARDUINO_UBLOX_NINA_W10)
			const char* model = "u-blox NINA-W10 series (ESP32)";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: u-blox NINA-W10 series (ESP32)"
			#endif
		#elif defined(ARDUINO_WIDORA_AIR)
			const char* model = "Widora AIR";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Widora AIR"
			#endif
		#elif defined(ARDUINO_ESP320)
			const char* model = "Electronic SweetPeas - ESP320";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Electronic SweetPeas - ESP320"
			#endif
		#elif defined(ARDUINO_NANO32)
			const char* model = "Nano32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Nano32"
			#endif
		#elif defined(ARDUINO_LOLIN32)
			const char* model = "LOLIN32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: LOLIN32"
			#endif
		#elif defined(ARDUINO_Pocket32)
			const char* model = "Dongsen Tech Pocket 32 / \"WeMos\" WiFi&Bluetooth Battery";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Dongsen Tech Pocket 32 / \"WeMos\" WiFi&Bluetooth Battery"
			#endif
		#elif defined(ARDUINO_ESPea32)
			const char* model = "ESPea32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ESPea32"
			#endif
		#elif defined(ARDUINO_QUANTUM)
			const char* model = "Noduino Quantum";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Noduino Quantum"
			#endif
		#elif defined(ARDUINO_Node32s)
			const char* model = "Node32s";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Node32s"
			#endif
		#elif defined(ARDUINO_HORNBILL_ESP32_DEV)
			const char* model = "Hornbill ESP32 Dev";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Hornbill ESP32 Dev"
			#endif
		#elif defined(ARDUINO_HORNBILL_ESP32_MINIMA)
			const char* model = "Hornbill ESP32 Minima";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Hornbill ESP32 Minima"
			#endif
		#elif defined(ARDUINO_INTOROBOT_ESP32_DEV)
			const char* model = "IntoRobot Fig";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: IntoRobot Fig"
			#endif
		#elif defined(ARDUINO_ONEHORSE_ESP32_DEV)
			const char* model = "Onehorse ESP32 Dev Module";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Onehorse ESP32 Dev Module"
			#endif
		#elif defined(ARDUINO_FEATHER_ESP32)
			const char* model = "Adafruit ESP32 Feather";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Adafruit ESP32 Feather"
			#endif
		#elif defined(ARDUINO_NodeMCU)//-32S
			const char* model = "NodeMCU-32S";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: NodeMCU-32S"
			#endif
		#elif defined(ARDUINO_MH_ET_LIVE_ESP32DEVKIT)
			const char* model = "MH ET LIVE ESP32DevKIT";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: MH ET LIVE ESP32DevKIT"
			#endif
		#elif defined(ARDUINO_MH_ET_LIVE_ESP32MINIKIT)
			const char* model = "MH ET LIVE ESP32MiniKit";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: MH ET LIVE ESP32MiniKit"
			#endif
		#elif defined(ARDUINO_esp32vn)//-iot-uno
			const char* model = "ESP32vn IoT Uno";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ESP32vn IoT Uno"
			#endif
		#elif defined(ARDUINO_ESP32)//-EVB
			const char* model = "OLIMEX ESP32-EVB / ESP32-GATEWAY";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: OLIMEX ESP32-EVB / ESP32-GATEWAY"
			#endif
	//  #elif defined(ARDUINO_ESP32-GATEWAY)
	//    const char* model = "OLIMEX ESP32-GATEWAY";
	//    #if defined(BOARD_IDENTIFY_WARNING) 
	//			#warning "Controller: OLIMEX ESP32-GATEWAY"
	//  	#endif
		#elif defined(ARDUINO_ESPino32)
			const char* model = "ThaiEasyElec's ESPino32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ThaiEasyElec's ESPino32"
			#endif
		#elif defined(ARDUINO_M5Stack)//-Core-ESP32
			const char* model = "M5Stack-Core-ESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: M5Stack-Core-ESP32"
			#endif
		#elif defined(ARDUINO_Heltec_WIFI_Kit_32)
			const char* model = "Heltec_WIFI_Kit_32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Heltec_WIFI_Kit_32"
			#endif
		#elif defined(ARDUINO_Heltec_WIFI_LoRa_32)
			const char* model = "Heltec_WIFI_LoRa_32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Heltec_WIFI_LoRa_32"
			#endif
		#elif defined(ARDUINO_ESPECTRO32)
			const char* model = "ESPectro32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ESPectro32"
			#endif
		#elif defined(ARDUINO_CoreESP32)
			const char* model = "Microduino-CoreESP32";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Microduino-CoreESP32"
			#endif
	// nRF52832 / nRF51
		#elif defined(ARDUINO_GENERIC) // Seems rather dangerous!!
			const char* model = "Generic nRF51/nRF52 / Nordic nRF51 Dongle (PCA10031)";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Generic nRF51/nRF52 / Nordic nRF51 Dongle (PCA10031)"
			#endif
		#elif defined(ARDUINO_ELECTRONUT_BLUEY)
			const char* model = "Electronut labs bluey";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Electronut labs bluey"
			#endif
		#elif defined(ARDUINO_RB_BLEND_2)
			const char* model = "RedBear Blend 2";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: RedBear Blend 2"
			#endif
		#elif defined(ARDUINO_RB_BLE_NANO_2)
			const char* model = "RedBear BLE Nano 2";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: RedBear BLE Nano 2"
			#endif
		#elif defined(ARDUINO_NRF52_DK)
			const char* model = "Nordic Semiconductor nRF52 DK";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Nordic Semiconductor nRF52 DK"
			#endif
		#elif defined(ARDUINO_STCT_NRF52_minidev)
			const char* model = "Taida Century nRF52 mini board";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Taida Century nRF52 mini board"
			#endif
		#elif defined(ARDUINO_BBC_MICROBIT)
			const char* model = "BBC micro:bit";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: BBC micro:bit"
			#endif
		#elif defined(ARDUINO_BLUZ_DK)
			const char* model = "Bluz DK / OSHChip";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Bluz DK / OSHChip"
			#endif
		#elif defined(ARDUINO_PCA1000X)
			const char* model = "Nordic nRF51X22 Development Kit(PCA1000X)";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Nordic nRF51X22 Development Kit(PCA1000X)"
			#endif
		#elif defined(ARDUINO_BOARD_PCA20006)
			const char* model = "Nordic Beacon Kit (PCA20006)";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Nordic Beacon Kit (PCA20006)"
			#endif
		#elif defined(ARDUINO_TINYBLE)
			const char* model = "TinyBLE";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: TinyBLE"
			#endif
		#elif defined(ARDUINO_BLE_NANO)
			const char* model = "RedBearLab BLE Nano";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: RedBearLab BLE Nano"
			#endif
		#elif defined(ARDUINO_REDBEARLAB_NRF51822)
			const char* model = "RedBearLab nRF51822";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: RedBearLab nRF51822"
			#endif
		#elif defined(ARDUINO_WAVESHARE_BLE400)
			const char* model = "Waveshare BLE400";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Waveshare BLE400"
			#endif
		#elif defined(ARDUINO_NG_BEACON)
			const char* model = "ng-beacon";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: ng-beacon"
			#endif
		#else
			const char* model = "Unknown Controller Model";
			#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Unknown Controller Model"
			#endif
		#endif

	#else
		const char* model = "Unknown Controller Type";
		#if defined(BOARD_IDENTIFY_WARNING) 
				#warning "Controller: Unknown Controller Type"
		#endif
	#endif
}