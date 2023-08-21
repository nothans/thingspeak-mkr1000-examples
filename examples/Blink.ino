/*
  Blink
  Flashes the Onboard LED of the MKR1000 board connected to pin 6.
 */

void setup() {
  // initialize digital pin 6 as an output
  pinMode(6, OUTPUT);
}

void loop() {
  // turn on LED
  digitalWrite(6, HIGH);
  delay(300);
  
  // turn off LED
  digitalWrite(6, LOW);
  delay(300);
}
