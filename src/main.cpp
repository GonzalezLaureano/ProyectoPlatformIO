#include <Arduino.h>
const int PIN_LED=D0;
const int PIN_BUTTON_FAST=D1;
const int PIN_BUTTON_LOW=D2;
int INT_time=1000;

void setup() {
  pinMode(PIN_LED,OUTPUT);
  pinMode(PIN_BUTTON_FAST,INPUT);
  pinMode(PIN_BUTTON_LOW,INPUT);
}

void loop() {
  if (digitalRead(PIN_BUTTON_FAST)==HIGH)
  {
    INT_time=INT_time-1000;
  }
  if (digitalRead(PIN_BUTTON_LOW)==HIGH)
  {
    INT_time=INT_time+1000;
  }
  
  digitalWrite(PIN_LED,HIGH);
  delay(INT_time);
  digitalWrite(PIN_LED,LOW);
  delay(INT_time);
  // put your main code here, to run repeatedly: 
}