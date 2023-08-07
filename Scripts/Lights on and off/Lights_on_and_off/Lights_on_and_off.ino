#include "DigiKeyboard.h"

#define LED_PIN 1 // Define the pin number where the LED is connected

void setup() {
  pinMode(LED_PIN, OUTPUT); // Set the LED pin as OUTPUT
}

void loop() {
  // Turn on the LED
  digitalWrite(LED_PIN, HIGH);
  DigiKeyboard.delay(1000); // Wait for 1 second (1000 milliseconds)

 // Turn off the LED
  digitalWrite(LED_PIN, LOW);
  DigiKeyboard.delay(1000); // Wait for 1 second (1000 milliseconds)
}