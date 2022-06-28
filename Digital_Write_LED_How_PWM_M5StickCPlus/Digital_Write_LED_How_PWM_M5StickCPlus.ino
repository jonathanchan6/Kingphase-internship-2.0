#include <M5StickCPlus.h>
const int ledPin = 26;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop(){
  //rand draw
  digitalWrite(ledPin, HIGH);
  delayMicroseconds(3000);
  digitalWrite(ledPin,LOW);
  delay(1000);
  M5.update();
}
