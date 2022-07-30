
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(A0) == LOW){
    digitalWrite(2,LOW);
    delay(10);
}else{
    digitalWrite(2,HIGH);
  }
}
