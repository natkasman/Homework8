void setup() {
  // LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again 
void loop() {
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(50);                       // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  delay(50);                       // wait for a second
}
