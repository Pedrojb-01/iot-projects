#include <Arduino.h>

const int potentiometerPin = A0;
int currentNumber = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int readNumber = analogRead(potentiometerPin);

  if (readNumber != currentNumber){
    Serial.println(readNumber);
    currentNumber = readNumber; 
  }
  delay(500);
}