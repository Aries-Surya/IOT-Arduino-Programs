int f = 9;
int r = 10;
void setup() {
  pinMode(r, OUTPUT);
  pinMode(f, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  motor();
}
void motor() {
  String Sig = Serial.readString();
  if (Sig == "f") {
    forward();
  }
  else if (Sig == "r") {
    reverse();
  }
  else if (Sig == "s") {
    moterStop();
  }
}
void forward() {
  Serial.println("Forward");
  digitalWrite(f, HIGH);
  digitalWrite(r, LOW);
}
void reverse() {
  Serial.println("Reverse");
  digitalWrite(f, LOW);
  digitalWrite(r, HIGH);
}
void moterStop() {
  Serial.println("Motor Off");
  digitalWrite(f, HIGH);
  digitalWrite(r, HIGH);
}
