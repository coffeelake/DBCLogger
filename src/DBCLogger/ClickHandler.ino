void clickHandler()
{
  // homescreen
  if (currentPage == 0) {
    if (myTouch.dataAvailable()) {
      myTouch.read();
      x = myTouch.getX(); // X coordinate where the screen has been pressed
      y = myTouch.getY(); // Y coordinates where the screen has been pressed
      // If we press the Sensors Button
      if ((x >= 35) && (x <= 285) && (y >= 90) && (y <= 130)) {
        drawFrame(35, 90, 285, 130); // Custom Function -Highlighs the buttons when it's pressed
        lastPage = 0;
        currentPage = 1; // Indicates that we are the first example
        myGLCD.clrScr(); // Clears the screen
        drawSensors(); // It is called only once, because in the next iteration of the loop, this above if statement will be false so this funtion won't be called. This function will draw the graphics of the first example.
      }
      // If we press the Data Button
      if ((x >= 35) && (x <= 285) && (y >= 140) && (y <= 180)) {
        drawFrame(35, 140, 285, 180);
        lastPage = 0;
        currentPage = 2;
        myGLCD.clrScr();
        drawData();
      }
      // If we press the Settings Button
      if ((x >= 35) && (x <= 285) && (y >= 190) && (y <= 230)) {
        drawFrame(35, 190, 285, 230);
        lastPage = 0;
        currentPage = 3;
        myGLCD.clrScr();
        drawSettings();
      }
    }
  }
  // sensor screen
  if (currentPage == 1) {
    if (myTouch.dataAvailable()) {
      myTouch.read();
      x = myTouch.getX(); // X coordinate where the screen has been pressed
      y = myTouch.getY(); // Y coordinates where the screen has been pressed
      if ((x >= 2) && (x <= 52) && (y >= 180) && (y <= 230)) {
        lastPage = 1;
        drawFrame(2, 180, 52, 230); // Custom Function -Highlighs the buttons when it's pressed
        currentPage = 0; // Indicates that we are the first example
        myGLCD.clrScr(); // Clears the screen
        drawHomeScreen();
      }
    }
  }
  //data screen
  if (currentPage == 2) {
    if (myTouch.dataAvailable()) {
      myTouch.read();
      x = myTouch.getX(); // X coordinate where the screen has been pressed
      y = myTouch.getY(); // Y coordinates where the screen has been pressed
      if ((x >= 2) && (x <= 52) && (y >= 180) && (y <= 230)) {
        lastPage = 2;
        drawFrame(2, 180, 52, 230); // Custom Function -Highlighs the buttons when it's pressed
        currentPage = 0; // Indicates that we are the first example
        myGLCD.clrScr(); // Clears the screen
        drawHomeScreen();
      }
    }
  }
  //data screen
  if (currentPage == 3) {
    if (myTouch.dataAvailable()) {
      myTouch.read();
      x = myTouch.getX(); // X coordinate where the screen has been pressed
      y = myTouch.getY(); // Y coordinates where the screen has been pressed
      if ((x >= 2) && (x <= 52) && (y >= 180) && (y <= 230)) {
        lastPage = 3;
        drawFrame(2, 180, 52, 230); // Custom Function -Highlighs the buttons when it's pressed
        currentPage = 0; // Indicates that we are the first example
        myGLCD.clrScr(); // Clears the screen
        drawHomeScreen();
      }
    }
  }
    //warning screen
  if (currentPage == 90) {
    if (myTouch.dataAvailable()) {
      myTouch.read();
      x = myTouch.getX(); // X coordinate where the screen has been pressed
      y = myTouch.getY(); // Y coordinates where the screen has been pressed
      if ((x >= 2) && (x <= 52) && (y >= 180) && (y <= 230)) {
       
        drawFrame(2, 180, 52, 230); // Custom Function -Highlighs the buttons when it's pressed
        currentPage = lastPage; // Indicates that we are the first example
        WarningPasses=10000;
        myGLCD.clrScr(); // Clears the screen
        if(lastPage==0)
        {
          drawHomeScreen();
        }
        else if(lastPage==1)
        {
          drawSensors();
        }
         else if(lastPage==2)
        {
          drawData();
        }
          else if(lastPage==3)
        {
            drawSettings();
        }
      }
    }
  }
}

