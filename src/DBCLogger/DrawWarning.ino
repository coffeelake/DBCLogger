void drawWarning(String text,String data)
{
  myGLCD.clrScr();
  myGLCD.setBackColor(0, 0, 0); // Sets the background color of the area where the text will be printed to black
  myGLCD.setFont(BigFont);  
  myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.print(text, CENTER, 135); // Prints the string
  myGLCD.setColor(239, 7, 7); // Red
  myGLCD.setFont(SevenSegNumFont);
  myGLCD.print(data, CENTER, 170); // Prints the string
  drawBackButton();
  myGLCD.drawBitmap (100, 20, 120, 106, w);
}
