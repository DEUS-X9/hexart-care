#include "cardio.h"




void setup()
{ 
Serial.begin(9600);
for (int n =4; n <=13; n++)
{
  pinMode(n, OUTPUT);
}

}

void loop()
{
pulse();
}

