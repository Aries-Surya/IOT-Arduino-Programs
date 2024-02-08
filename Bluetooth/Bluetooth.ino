int thisPin = 13;
void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the LED pins
  pinMode(thisPin, OUTPUT);
}

void loop() {
  // read the sensor:
  delay(1000);
  if (Serial.available() > 0) {
    int inByte = Serial.read();
    switch (inByte) {
      case 'a':
        digitalWrite(thisPin, HIGH);
        break;
      case 'b':
        digitalWrite(thisPin, LOW);
    }
  }
}
