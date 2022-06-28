#include <M5StickCPlus.h>
const int ledPin = 26;
int ir = 0; // analog input pin 
int val = 0; //val to determine the light on or off 

void setup() { 
// set the input & output pins here 
pinMode(ledPin, OUTPUT); 
pinMode(ir, INPUT); 
Serial.begin(9600);
} 

void loop() { 
 int val = analogRead(ir);
 
 if (val < 300) { //since when obstacle detected, val > 640
 digitalWrite(ledPin, HIGH); 
 } 

  else { 
 digitalWrite(ledPin, LOW); 
 } 
 Serial.println(val);
}
