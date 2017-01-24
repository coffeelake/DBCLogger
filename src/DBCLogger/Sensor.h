class Sensor
{
  public: Sensor(String name);

    void begin();
    String GetName();

    bool status();
  private:
    String _name;
    bool _status;
};

Sensor::Sensor(String name)
{
  _name = name;
}

void Sensor::begin()
{
  // pinMode(_pin, OUTPUT);
}

String Sensor::GetName()
{
  return _name;
}

bool Sensor::status()

{
  return _status;
}
