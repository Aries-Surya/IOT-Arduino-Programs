int red =  13;
int yellow =  12;
int green =  11;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  traffic();
}
void traffic() {
  String Sig = Serial.readString();
  if (Sig == "stop") {
    redHigh(); return(0);
  }
  else if (Sig == "go") {
    greenHigh(); return(0);
  }
  else if (Sig == "wait") {
    yellowHigh(); return(0);
  }
  else {
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
  }
}
void redHigh()
{
  Serial.println("STOP");
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
//  delay(100000);
}
void yellowHigh()
{
  Serial.println("GET READY");
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
//  delay(100000);
}
void greenHigh()
{
  Serial.println("GO");
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
//  delay(100000);
}
