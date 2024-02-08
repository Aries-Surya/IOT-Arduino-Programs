int LED = 9;
int i=0;
void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (i; i <= 256; i++) {
    analogWrite(LED, i);
    Serial.println(i);
    delay(100);
  }
  i=0;
  delay(10000);
}
