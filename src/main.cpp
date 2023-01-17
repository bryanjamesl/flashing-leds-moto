#include <Arduino.h>

int extLED = 7;
int onboardLED = 13;

void setup()  {
pinMode(extLED, OUTPUT);                // pin to drive gate on the MOSFET
pinMode(onboardLED, OUTPUT);            // on board LED pin for reference            
              }

void loop() 
{
    for(int i = 0; i < 3; i++ )
    {
    digitalWrite(extLED, HIGH);         // turn on LED bars
    digitalWrite(onboardLED, HIGH);     // turn on on board LED
    delay(50);                          // wait 50ms
    digitalWrite(extLED, LOW);          // turn off LED bars
    digitalWrite(onboardLED, LOW);      // turn off on board LED
    delay(50);                          // wait 50ms
    }
    digitalWrite(onboardLED, HIGH);
    delay(150);
    digitalWrite(onboardLED, LOW); 
    delay(150);
}