int led = 13;
int touch = 12;
void setup() {
  pinMode(touch, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int r = digitalRead(touch);
  if (r == HIGH) {
    digitalWrite(led, HIGH);
    Serial.println("Touch ON");
    //    delay(2000);
  } else {
    digitalWrite(led, LOW);
    Serial.println("Touch OFF");
  }
}
