/*
 *  Board_Identify.cpp
 *  Identify the microcontroller that the code has been compiled for.
 *  Created by Matt Fryer on 2017-10-04.
 *  Licensed under LGPL (free to modify and use as you wish)
 */
 
// Adding this line before the library is included will cause a warning in the compile output window containing the identified board
#define BOARD_IDENTIFY_WARNING
// If warnings still don't display, ensure "File->Preferences->compiler warnings" is set to "Default".
// Even doing this, some boards still won't display the warning in the compile window but the constant will still be created.

// Include the library
#include <Board_Identify.h>

void setup() {
  // Open the serial
  Serial.begin(9600);
  
  // Print the board information to the serial using the defined terms
  Serial.print(F("Board Model: "));
  Serial.println(boardIdentify::model); 
  // Board Indentify uses a namespace boardIdentify to prevent varibale name conflicts
}

void loop() {
  
}