void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(13, HIGH);
  //Serial.println("LED ON");
  delay(500);
  digitalWrite(12, HIGH);
  //Serial.println("LED OFF");
  delay(500);
  digitalWrite(11, HIGH);
  //Serial.println("LED ON");
  delay(500);
  digitalWrite(10, HIGH);
  //Serial.println("LED OFF");
  delay(500);
  digitalWrite(9, HIGH);
  //Serial.println("LED ON");
  delay(500);
  digitalWrite(9, LOW);
  //Serial.println("LED ON");
  delay(500);
  digitalWrite(10, LOW);
  //Serial.println("LED OFF");
  delay(500);
  digitalWrite(11, LOW);
  //Serial.println("LED ON");
  delay(500);
  digitalWrite(12, LOW);
  //Serial.println("LED OFF");
  delay(500);
  digitalWrite(13, LOW);
  //Serial.println("LED ON");
  delay(500);
}
