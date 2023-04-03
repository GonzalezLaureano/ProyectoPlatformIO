#include <Arduino.h>
const int PIN_LED=D4;
const int PIN_BUTTON_FAST=D1;
const int PIN_BUTTON_LOW=D2;
unsigned long waitTime=1000;
unsigned long actualTime;
unsigned long pastTime;

void setup() {
  pinMode(PIN_LED,OUTPUT);
  pinMode(PIN_BUTTON_FAST,INPUT);
  pinMode(PIN_BUTTON_LOW,INPUT);
}

void loop() {
  actualTime=millis();
  if (digitalRead(PIN_BUTTON_FAST)==HIGH)
  {
    waitTime-=1000;
  }
  if (digitalRead(PIN_BUTTON_LOW)==HIGH)
  {
    waitTime+=1000;
  }
  if (actualTime-pastTime>=waitTime)
  {
    digitalWrite(PIN_LED,!digitalRead(PIN_LED));
    pastTime=actualTime;
  }
  // put your main code here, to run repeatedly: 
}