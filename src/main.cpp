#include <Arduino.h>

int led = 2;


void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {

  for (int i=0;i<256;i++){
    analogWrite(led,i);
    Serial.println(i);
  }

  for(int i=255;i>0;i--){
     analogWrite(led,i);
      Serial.println(i);
  }
  
}