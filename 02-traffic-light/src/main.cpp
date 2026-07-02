#include <Arduino.h>

const int redLed = 13;
const int redTime = 3000;

const int greenLed = 12;
const int greenTime = 3000;

const int yellowLed = 11;
const int yellowTime = 1000;

void setup() {
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop() {
  digitalWrite(greenLed, HIGH);
  delay(greenTime);
  digitalWrite(greenLed, LOW);

  digitalWrite(yellowLed, HIGH);
  delay(yellowTime);
  digitalWrite(yellowLed, LOW);

  digitalWrite(redLed, HIGH);
  delay(redTime);
  digitalWrite(redLed, LOW);
}
