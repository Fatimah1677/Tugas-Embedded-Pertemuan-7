#include <Arduino.h>

void setup() {
// put your setup code here, to run once:
 pinMode(LED_BUILTIN, OUTPUT);
 }

void loop() {
 // put your main code here, to run repeatedly:
 digitalWrite(LED_BUILTIN, LOW);
 delay(1000); // Wait for a second
 digitalWrite(LED_BUILTIN, HIGH); // Turn the LED off by making the voltage HIGH
 delay(2000); 
 }
