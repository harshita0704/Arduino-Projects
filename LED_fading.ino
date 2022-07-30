int b = 3;
int c = 5;
int d = 7;
int e = 9;
int f = 10;
int g = 12;
void setup() {
  // put your setup code here, to run once:
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i = 0; i<256;i++){
  analogWrite(b,i);
  delay(25);
}
for (int i = 0; i<256;i++){
  analogWrite(c,i);
  delay(25);
}
for (int i = 0; i<256;i++){
  analogWrite(d,i);
  delay(25);
}
for (int i = 0; i<256;i++){
  analogWrite(e,i);
  delay(25);
}
for (int i = 0; i<256;i++){
  analogWrite(f,i);
  delay(25);
}
for (int i = 0; i<256;i++){
  analogWrite(g,i);
  delay(25);
}
for (int i = 255; i >= 0; i--){
  analogWrite(b,i);
  delay(25);
}
for (int i = 255; i >=0; i--){
  analogWrite(c,i);
  delay(25);
}
for (int i = 255; i >=0; i--){
  analogWrite(d,i);
  delay(25);
}
for (int i = 255; i >=0; i--){
  analogWrite(e,i);
  delay(25);
}
for (int i = 255; i >=0; i--){
  analogWrite(f,i);
  delay(25);
}
for (int i = 255; i >=0; i--){
  analogWrite(g,i);
  delay(25);
}
}
