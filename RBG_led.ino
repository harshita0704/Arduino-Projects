int red = 3;
int green = 6;
int blue = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}
void setColor(int r, int g, int b){
  analogWrite(red, 255 - r);
  analogWrite(green, 255 - g);
  analogWrite(blue, 255 - b);
}
void loop() {
  // put your main code here, to run repeatedly:
  setColor(255, 0, 0);
  delay(500);
  setColor(0, 255, 0);
  delay(500);
  setColor(0, 0, 255);
  delay(500);
  setColor(255, 255, 0);
  delay(500);
  setColor(0, 255, 255);
  delay(500);
  setColor(255, 0, 255);
  delay(500);
  setColor(255, 255, 255);
  delay(500);
}
