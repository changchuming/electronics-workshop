/*
  Music
  Plays music when button is pressed
  Created 08/01/17 by Chang Chu-Ming
  Based on melody by Tom Igoe
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
    digitalWrite(ledPin, HIGH);   // turn the LED on by setting voltage to high
    play(buzzerPin);
    digitalWrite(ledPin, LOW);    // turn the LED off by setting voltage to low
  }
}

// Play some notes
void play(int buzzerPin)
{
  // notes in the melody:
  int notes[] = {NOTE_A3, NOTE_A3, NOTE_A3, NOTE_F3, NOTE_C4, NOTE_A3, NOTE_F3, NOTE_C4, NOTE_A3};

  // note durations: 4 = quarter note, 8 = eighth note, etc.:
  int noteDurations[] = {4, 4, 4, 8, 12, 4, 8, 12, 2};

  // for each note
  for (int thisNote = 0; thisNote <(sizeof(noteDurations)/sizeof(int)) ; thisNote++) {
    int noteDuration = 2000 / noteDurations[thisNote]; // Calculate note duration - quarter note = 1000 / 4, eighth note = 1000/8, etc.
    tone(buzzerPin, notes[thisNote], noteDuration); // Play tone
    
    int pauseBetweenNotes = noteDuration + 1; // Pause between notes - duration of note + 1 ms
    delay(pauseBetweenNotes);
  }
}
