int a = A0;
int b = 13;
int c = 12;
int d = 10;
int r;
void setup() {
  pinMode(a, INPUT);
  pinMode(d, INPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  r = analogRead(a);
//  Serial.println(d);
  Serial.println(r);
  if (r > 500) {
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
  }
  else{
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
  }
  delay(1000);
}
