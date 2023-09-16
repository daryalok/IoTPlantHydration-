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
  // Initialize the QuadDisplay
  qd.begin();
  // Set the POMP_PIN as an output
  pinMode(POMP_PIN, OUTPUT);
  // Display the initial humidity value (0)
  qd.displayInt(0);
}

void loop(void)
{
   // Read the humidity sensor value
   int humidityNow = analogRead(HUMIDITY_PIN);
   
   // If the humidity value has changed, update the display
   if(humidityNow != humidity) {
     humidity = humidityNow;
     qd.displayInt(humidityNow);
   }
   
   // If humidity is below the minimum and enough time has passed, turn on the pump
   if ((waitTime == 0 || millis() - waitTime > INTERVAL) && humidity < HUMIDITY_MIN ) {
     digitalWrite(POMP_PIN, HIGH);
     // Delay for 2 seconds (2000 milliseconds)
     delay(2000);
     digitalWrite(POMP_PIN, LOW);
     // Update the waitTime to the current millis()
     waitTime = millis();
   }
}