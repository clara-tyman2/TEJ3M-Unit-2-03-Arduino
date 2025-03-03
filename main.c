/*
 Created by Clara T

 Created on Feb 2025

 Blink with Breadboard and LED with resistor

 Turns LED on for one second, the off for one second, each time increases each time by 1 more second
*/


 const int PIN_5 = 5;

 int blinkTime = 1000;  // set variable to 1000
  
 void setup()
 {
   pinMode(PIN_5, OUTPUT);
 }
 
 void loop()
 {
   digitalWrite(PIN_5, HIGH);
   delay(blinkTime); // Wait for 1000 millisecond(s)
   digitalWrite(PIN_5, LOW);
   delay(blinkTime); // Wait for 1000 millisecond(s)
 
   blinkTime = blinkTime + 1000; // add 1 second to the variable blinkTime
 }