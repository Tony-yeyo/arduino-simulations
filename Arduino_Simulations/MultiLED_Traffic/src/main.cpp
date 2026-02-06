#include <Arduino.h>

const int redLed = 8; // Pin connected to the LED
const int yellowLed = 9; // Pin connected to the yellow LED
const int greenLed = 10; // Pin connected to the green LED

void setup() {
  // Initialize the LED pins as outputs
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  // Turn on the red LED and turn off the others
  digitalWrite(redLed, HIGH);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW);
  delay(3000); // Wait for 3 second

  // Turn on the yellow LED and turn off the others
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, LOW);
  delay(2000); // Wait for 2 second

  // Turn on the green LED and turn off the others
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, HIGH);
  delay(3000); // Wait for 3 second

  // Turn on the yellow LED and turn off the others
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, LOW);
  delay(2000); // Wait for 2 second
}
