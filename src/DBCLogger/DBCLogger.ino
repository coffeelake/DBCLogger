/*  Arduino DBCLogger
    Program made by Daniel Berg
*/

#include <UTFT.h>
#include <URTouch.h>

//==== Creating Objects
UTFT    myGLCD(SSD1289, 38, 39, 40, 41); //Parameters should be adjusted to your Display/Schield model
URTouch  myTouch( 6, 5, 4, 3, 2);

//==== Defining Variables
extern uint8_t SmallFont[];
extern uint8_t BigFont[];
extern uint8_t SevenSegNumFont[];
char currentPage, selectedUnit;
int x, y;
extern unsigned int w[12720]; // Warning Bitmap

void setup() {
  // Initial setup
  myGLCD.InitLCD();
  myGLCD.clrScr();
  myTouch.InitTouch();
  myTouch.setPrecision(PREC_MEDIUM);
  // Defining Pin Modes

  drawHomeScreen();  // Draws the Home Screen
  currentPage = '0'; // Indicates that we are at Home Screen
  selectedUnit = '0'; // Indicates the selected unit for the first example, cms or inches
}

void loop() {
  clickHandler();  
}
