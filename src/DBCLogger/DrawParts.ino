void drawBackButton() {
  //  backbutton
  myGLCD.setColor(72, 84, 249);
  // myGLCD.fillRoundRect (2, 180, 52, 230);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (2, 180, 52, 230);
  //myGLCD.setFont(BigFont);
  //myGLCD.setBackColor(72, 84, 249);
  //myGLCD.print("Data", 0, 160);

}
// Highlights the button when pressed
void drawFrame(int x1, int y1, int x2, int y2) {
  myGLCD.setColor(255, 0, 0);
  myGLCD.drawRoundRect (x1, y1, x2, y2);
  while (myTouch.dataAvailable())
    myTouch.read();
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (x1, y1, x2, y2);
}
