int i=2,j=6;
void setup() {
  for(int i=2;i<=6;i++){
      pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  for(int i=2;i<=6;i++){
      digitalWrite(i,HIGH);
      delay(1000);
  }
  for(int j=6;j>=2;j--){
    digitalWrite(j,LOW);
    delay(1000);
  }
}
