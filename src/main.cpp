#include <Arduino.h>

int led = 6;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {

  digitalWrite(led,HIGH);
  delay(10);
  digitalWrite(led,LOW);
  delay(10);
  
}