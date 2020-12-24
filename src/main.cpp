#include <Arduino.h>

#define LaserPin 2

void setup() {
  pinMode(LaserPin, OUTPUT);
}

void loop() {
  digitalWrite(LaserPin, HIGH);
  delay(1000);

  digitalWrite(LaserPin, LOW);
  delay(1000);
}