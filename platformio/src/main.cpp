#include <Arduino.h>

#define LED_PIN 4

void setup() {
    // put your setup code here, to run once:
    pinMode(LED_PIN, OUTPUT);

    Serial.begin(9600);

    Serial.println("Board was reset!");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  Serial.println("tic");
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  Serial.println("toc");
}