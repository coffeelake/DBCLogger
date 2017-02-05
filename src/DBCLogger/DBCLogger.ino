/*  Arduino DBCLogger
    Program made by Daniel Berg
*/

#include <UTFT.h>
#include <URTouch.h>
#include ".\Sensor.h"
//==== Creating Objects
UTFT    myGLCD(SSD1289, 38, 39, 40, 41); //Parameters should be adjusted to your Display/Schield model
URTouch  myTouch( 6, 5, 4, 3, 2);

//==== Defining Variables
extern uint8_t SmallFont[];
extern uint8_t BigFont[];
extern uint8_t SevenSegNumFont[];
char selectedUnit;
int currentPage, lastPage,WarningPasses;
int x, y;
extern unsigned int w[12720]; // Warning Bitmap
Sensor sensors [5] = {Sensor("Whater out",108),Sensor("Whater in",108),Sensor("oil 2 cooler",108),Sensor("oil from cooler",108),Sensor("oil turbo out",108)};

int colorGreen[3]{37, 155, 55};
int colorYellow[3] {232, 150, 9};
int colorRed[3] {239, 7, 7};

void setup() {  
  // Initial setup
  myGLCD.InitLCD();
  myGLCD.clrScr();
  myTouch.InitTouch();
  myTouch.setPrecision(PREC_MEDIUM);
  // Defining Pin Modes

  drawHomeScreen();  // Draws the Home Screen
  currentPage = 0; // Indicates that we are at Home Screen
  selectedUnit = '0'; // Indicates the selected unit for the first example, cms or inches
  WarningPasses=0;
}

void loop() {
  clickHandler();
  SensorsHandler();
  LoggHandler();
  if(WarningPasses>0)
  {
    WarningPasses--;
  }
}

