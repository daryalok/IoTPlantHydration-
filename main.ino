#include "QuadDisplay2.h"

#define POMP_PIN        4

#define HUMIDITY_PIN    A0

#define HUMIDITY_MIN    200

#define HUMIDITY_MAX    700

#define INTERVAL        60000 * 3   

unsigned int humidity = 0;

unsigned long waitTime = 0;


QuadDisplay qd(9);

void setup(void)
{
  qd.begin();
  pinMode(POMP_PIN, OUTPUT);
  qd.displayInt(0);
}

void loop(void)
{
   int humidityNow = analogRead(HUMIDITY_PIN);
    if(humidityNow != humidity) {
    humidity= humidityNow;
    qd.displayInt(humidityNow);
  }
    if ((waitTime == 0 || millis() - waitTime > INTERVAL) && humidity < HUMIDITY_MIN ) {
    
    digitalWrite(POMP_PIN, HIGH);
    delay(2000);
      digitalWrite(POMP_PIN, LOW);
      waitTime = millis();
  }
}
