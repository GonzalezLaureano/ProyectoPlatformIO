#include <Arduino.h>

const int PIN_LED=2;

void setup() {
  pinMode(PIN_LED,OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED,HIGH);
  delay(5000);
  digitalWrite(PIN_LED,LOW);
  delay(5000);
  // put your main code here, to run repeatedly: 
}