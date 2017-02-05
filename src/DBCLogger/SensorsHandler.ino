void SensorsHandler()
{
  //loop thrue all the sensors
  int i;
  for (i = 0; i < 5; i = i + 1) {
    Sensor sensor = sensors[i];
    //get the values
    int value = GetValue();
    sensor.SetValue(String(value));
    int maxvalue = sensor.GetMaxValue();
    //check if something should thrown error
    int yellow = maxvalue - (maxvalue / 4);
    if (value >= maxvalue)
    {     
      if (currentPage != 90 && WarningPasses==0)
      {       
         currentPage = 90;
         drawWarning(sensors[i].GetName(), String(value));
      }
      
      
    }
    //set color
    if (value >= maxvalue)
    {
      //color red 
           sensor.SetColor("Red");
    }
    else if (value >= yellow)
    {
      //color yellow
      sensor.SetColor("Yellow");
    }
    else
    {
       //color green
       sensor.SetColor("Green");
    }
    sensors[i] = sensor;
  }

  //update numbers(for now refresh the total screen)
  if (currentPage == 1 && currentPage!=90) {

    //QnD for now to delete values
    myGLCD.setColor(0, 0, 0);
    myGLCD.fillRoundRect (270, 0, 319, 200);
    drawSensors();
   
  }
  
}
int GetValue()
{
  return  random(0, 109);
}

