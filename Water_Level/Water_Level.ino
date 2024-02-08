int a=A0;

void setup() {
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  int r = analogRead(a);
   Serial.println(r);
  for(int i;i<500;i++){
  analogWrite(13,i);
    
  }

}
