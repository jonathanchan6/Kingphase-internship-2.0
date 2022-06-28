#include <M5StickCPlus.h>
int val;         // variable to store the read value
const int ledPin = 26;

void setup() {
  M5.begin();
  pinMode(ledPin, OUTPUT);  // sets the pin as output
  pinMode(M5_BUTTON_HOME, INPUT);
  Serial.begin(9600);
}
void loop() {
  val = digitalRead(M5_BUTTON_HOME);  // read the input pin
  if (val == HIGH){
    digitalWrite(ledPin, HIGH);
  }else {
    digitalWrite(ledPin, LOW);
  }
}

/*void loop() {
  val = digitalRead(analogPin);  // read the input pin
  if (val == HIGH){
    digitalWrite(ledPin, HIGH);
  }else {
    digitalWrite(ledPin, LOW);
  }
}*/
