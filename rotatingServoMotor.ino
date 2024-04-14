#include<Servo.h>

Servo mymotor;

void setup()
{
  mymotor.attach(6);
}

void loop()
{
  mymotor.write(120);
  delay(1500);
  mymotor.write(0);
  delay(1500);
}
