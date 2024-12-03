#include <Arduino.h>


void setup() {
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
}

void loop() {
  //Led Red
  digitalWrite(25, HIGH);
  delay(8000);
  digitalWrite(25, LOW);

  //Led Yellow
  digitalWrite(26, HIGH);
  delay(1000);
  digitalWrite(26, LOW);

  //Led Green
  digitalWrite(27, HIGH);
  delay(3000);
  digitalWrite(27, LOW);
}

