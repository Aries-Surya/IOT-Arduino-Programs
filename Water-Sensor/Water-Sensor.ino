int LED = 9;
int Sensor = A0;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  int Sen = analogRead(Sensor);
  Serial.println(Sen);
  if (Sen > 500) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
    digitalWrite(LED, );
  }
}
