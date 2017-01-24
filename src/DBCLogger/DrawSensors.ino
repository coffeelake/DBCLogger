void drawSensors() {
  myGLCD.setBackColor(0, 0, 0); // Sets the background color of the area where the text will be printed to black
  myGLCD.setFont(BigFont);
  //row1
  myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.print(sensors[0].GetName(), 0, 0); // Prints the string
  myGLCD.setColor(253, 255, 178); // Yellow
  myGLCD.print("98c", RIGHT, 0); // Prints the string
  //row2
  myGLCD.setColor(255, 255, 255);
  myGLCD.print(sensors[1].GetName(), 0, 25);
  myGLCD.setColor(37, 155, 55); // Green
  myGLCD.print("58c", RIGHT, 25);
  //row3
  myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.print(sensors[2].GetName(), 0, 75); // Prints the string
  myGLCD.setColor(253, 255, 178); // Yellow
  myGLCD.print("102c", RIGHT, 75); // Prints the string
  //row4
  myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.print(sensors[3].GetName(), 0, 100); // Prints the string
  myGLCD.setColor(37, 155, 55); // Green
  myGLCD.print("90c", RIGHT, 100); // Prints the string
  //row5
  myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.print(sensors[4].GetName(), 0, 125); // Prints the string
  myGLCD.setColor(239, 7, 7); // Red
  myGLCD.print("152c", RIGHT, 125); // Prints the string


  drawBackButton();
}
