void drawSensors() {

  myGLCD.setBackColor(0, 0, 0); // Sets the background color of the area where the text will be printed to black
  myGLCD.setFont(BigFont);

  int i;
  for (i = 0; i < 5; i = i + 1) {
    myGLCD.setColor(255, 255, 255); // Sets color to white
    myGLCD.print(sensors[i].GetName(), 0, 25 * i); // Prints the string
    if (sensors[i].GetColor() == "Green") {
      myGLCD.setColor(colorGreen[0], colorGreen[1], colorGreen[2]);
    }
    else if (sensors[i].GetColor() == "Yellow") {
      myGLCD.setColor(colorYellow[0], colorYellow[1], colorYellow[2]);
    }
    else if (sensors[i].GetColor() == "Red") {
      myGLCD.setColor(colorRed[0], colorRed[1], colorRed[2]);
    }

    myGLCD.print(sensors[i].GetValue(), RIGHT, 25 * i); // Prints the string
  }


  //row1
  // myGLCD.setColor(255, 255, 255); // Sets color to white
  // myGLCD.print(sensors[0].GetName(), 0, 0); // Prints the string
  // myGLCD.setColor(253, 255, 178); // Yellow
  // myGLCD.print(sensors[0].GetValue(), RIGHT, 0); // Prints the string
  //row2
  //myGLCD.setColor(255, 255, 255);
  //  myGLCD.print(sensors[1].GetName(), 0, 25);
  // myGLCD.setColor(37, 155, 55); // Green
  // myGLCD.print(sensors[1].GetValue(), RIGHT, 25);
  //row3
  // myGLCD.setColor(255, 255, 255); // Sets color to white
  // myGLCD.print(sensors[2].GetName(), 0, 75); // Prints the string
  // myGLCD.setColor(253, 255, 178); // Yellow
  // myGLCD.print(sensors[2].GetValue(), RIGHT, 75); // Prints the string
  //row4
  // myGLCD.setColor(255, 255, 255); // Sets color to white
  // myGLCD.print(sensors[3].GetName(), 0, 100); // Prints the string
  // myGLCD.setColor(37, 155, 55); // Green
  // myGLCD.print(sensors[3].GetValue(), RIGHT, 100); // Prints the string
  //row5
  // myGLCD.setColor(255, 255, 255); // Sets color to white
  // myGLCD.print(sensors[4].GetName(), 0, 125); // Prints the string
  // myGLCD.setColor(239, 7, 7); // Red
  // myGLCD.print(sensors[4].GetValue(), RIGHT, 125); // Prints the string


  drawBackButton();
}
