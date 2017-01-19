void drawHomeScreen() {
  // Title
  myGLCD.setBackColor(0, 0, 0); // Sets the background color of the area where the text will be printed to black
  myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.setFont(BigFont); // Sets font to big
  myGLCD.print("DB CarLogger", CENTER, 10); // Prints the string on the screen
  myGLCD.setColor(244, 134, 66); // Sets color to red
  myGLCD.drawLine(0, 32, 319, 32); // Draws the red line
  myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.setFont(SmallFont); // Sets the font to small
  myGLCD.print("github.com/coffeelake/DBCLogger", CENTER, 41); // Prints the string
  myGLCD.setFont(BigFont);
  myGLCD.print("Select", CENTER, 64);

  // Button - Sensors
  myGLCD.setColor(72, 84, 249); // Sets green color
  myGLCD.fillRoundRect (35, 90, 285, 130); // Draws filled rounded rectangle
  myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.drawRoundRect (35, 90, 285, 130); // Draws rounded rectangle without a fill, so the overall appearance of the button looks like it has a frame
  myGLCD.setFont(BigFont); // Sets the font to big
  myGLCD.setBackColor(72, 84, 249); // Sets the background color of the area where the text will be printed to green, same as the button
  myGLCD.print("Sensors", CENTER, 102); // Prints the string

  // Button - Data
  myGLCD.setColor(72, 84, 249);
  myGLCD.fillRoundRect (35, 140, 285, 180);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (35, 140, 285, 180);
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(72, 84, 249);
  myGLCD.print("Data", CENTER, 152);
  // Button - Settings
  myGLCD.setColor(72, 84, 249);
  myGLCD.fillRoundRect (35, 190, 285, 230);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (35, 190, 285, 230);
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(72, 84, 249);
  myGLCD.print("Settings", CENTER, 202);
}
