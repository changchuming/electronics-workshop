/*
  Music
  Plays music when button is pressed
  Created 08/01/17 by Chang Chu-Ming
*/
#include "library.h"

int ledPin = A5;
int buttonPin = 3; // Pin D3
int buzzerPin = 9;

// Setup runs once upon power-up
void setup() {
  pinMode(ledPin, OUTPUT); // Initialize ledPin (pin A5) as OUTPUT pin
  pinMode(buttonPin, INPUT_PULLUP); // Initialize buttonPin (pin D3) as INPUT pin with pullup
}

// Loop keeps running as long as power is on
void loop() {
  if (digitalRead(buttonPin) == LOW)
  {
    digitalWrite(ledPin, HIGH); // turn the LED on by setting voltage to high
    tone(buzzerPin, NOTE_C6, 1000); // play the note C6 for 1s
  } else {
    digitalWrite(ledPin, LOW);    // turn the LED off by setting voltage to low
  }
}
