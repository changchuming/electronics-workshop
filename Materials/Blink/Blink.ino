/*
  Blink
  Turns LED on for 1 second and off for 1 second, loop
  Created 08/01/17 by Chang Chu-Ming
*/

int ledPin = A5;

// Setup runs once upon power-up
void setup() {
  pinMode(ledPin, OUTPUT); // Initialize ledPin (pin A5) as OUTPUT pin
}

// Loop keeps running as long as power is on
void loop() {
  digitalWrite(ledPin, HIGH);   // turn the LED on by setting voltage to high
  delay(1000);                  // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by setting voltage to low
  delay(1000);                  // wait for a second
}
