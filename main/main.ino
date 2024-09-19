#include "sensors.h"

void setup()
{
  Serial.begin(9600);
  Sensor();
  Sensor().setupSensor();
}

void loop()
{
  Sensor().computeOrientation();
}