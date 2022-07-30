int a=8;
int b=12;
int c=11;
int d=4;
int e=5;
void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (a,HIGH);
digitalWrite (b,LOW);
digitalWrite (c,HIGH);
digitalWrite (d,LOW);
digitalWrite (e,HIGH);
delay(1000);
digitalWrite (a,LOW);
digitalWrite (b,HIGH);
digitalWrite (c,LOW);
digitalWrite (d,HIGH);
digitalWrite (e,LOW);
delay(1000);
}
