class Sensor
{
  public: Sensor(String name, int maxValue);

    void begin();
    String GetName();
    String GetValue();
    int GetMaxValue();
    String GetColor();
    void SetValue(String input);
     void SetColor(String input);
    bool status();
  private:
    String _name;
    String _value;
    bool _status;
    int _maxValue;
    String _color;
};

Sensor::Sensor(String name, int maxValue)
{
  _name = name;
  _maxValue = maxValue;
  _color = "Green";
}

void Sensor::begin()
{
  // pinMode(_pin, OUTPUT);
}

String Sensor::GetName()
{
  return _name;
}

String Sensor::GetValue()
{
  return _value;
}
String Sensor::GetColor()
{ 
  return _color;
}
int Sensor::GetMaxValue()
{
  return _maxValue;
}
void Sensor::SetValue(String input)
{
  _value = input;
}
void Sensor::SetColor(String input)
{
  _color = input;
}

bool Sensor::status()

{
  return _status;
}
