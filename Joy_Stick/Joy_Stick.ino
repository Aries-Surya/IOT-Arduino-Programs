int a = A0;
int b = A1;
int LED1 = 13;
int LED2 = 12;
void setup() {
  pinMode(a, INPUT);
  pinMode(b, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int x = analogRead(a);
  int y = analogRead(b);
  Serial.println(x);
  Serial.println(y);
  if ((x >= 0 && x <= 500) || (x >= 600 && x <= 1024)) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
  } else if ((y >= 0 && y <= 500) || (y >= 600 && y <= 1024)) {
    digitalWrite(LED2, HIGH);
    digitalWrite(LED1, LOW);
  } else {
    digitalWrite(LED2, LOW);
    digitalWrite(LED1, LOW);
  }
  delay(100);

}
