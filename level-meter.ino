int ledPin5 = 5;
int ledPin6 = 6;
int ledPin9 = 9;
int sensorPin = A0;
int sensorValue = 0;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over
void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if (sensorValue > 50 && sensorValue < 250) {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
  }
  if (sensorValue < 50) {
    digitalWrite(5, LOW);

  }
  if (sensorValue > 255 && sensorValue < 550) {
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(9, LOW);
  }
  if (sensorValue > 550 && sensorValue < 750) {
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
  }
}
