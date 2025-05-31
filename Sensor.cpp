#include <LiquidCrystal.h>

// Initialize LCD with control and data pins: RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Define ultrasonic sensor pins
#define TRIG_PIN 9
#define ECHO_PIN 8

void setup() {
  // Setup LCD
  lcd.begin(16, 2);
  lcd.print("Distance:");

  // Setup ultrasonic pins
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  // Send 10us pulse to trigger
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read echo time
  long duration = pulseIn(ECHO_PIN, HIGH);
  float distance = duration * 0.034 / 2; // in cm

  // Display distance
  lcd.setCursor(0, 1); // Second line
  lcd.print(distance);
  lcd.print(" cm     "); // Clear trailing chars

  delay(500);
}
