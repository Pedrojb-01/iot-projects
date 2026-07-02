#include <Arduino.h>

const int leds[] = {13, 12, 11};
const int buttons[] = {7, 6, 5};
const int count = 3;

void setup() {
  for (int i = 0; i < count; i++){
    pinMode(leds[i], OUTPUT);
    pinMode(buttons[i], INPUT_PULLUP);
  }
}

void loop() {
  for (int i = 0; i < count; i++){
    int ButtonState = digitalRead(buttons[i]);
    if (ButtonState == LOW){
      digitalWrite(leds[i], HIGH);
    } else {
      digitalWrite(leds[i], LOW);
    }
  }
}