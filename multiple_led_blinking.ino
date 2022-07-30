int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int h=9;
int i=10;
int j=11;
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT); 
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (a,HIGH);
digitalWrite (b,LOW);
delay(1000);
digitalWrite (c,HIGH);
digitalWrite (d,LOW);
delay(1000);
digitalWrite (e,HIGH);
digitalWrite (f,LOW);
delay(1000);
digitalWrite (g,HIGH);
digitalWrite (h,LOW);
delay(1000);
digitalWrite (i,HIGH);
digitalWrite (j,LOW);
delay(1000);
digitalWrite (a,LOW);
digitalWrite (b,HIGH);
delay(1000);
digitalWrite (c,LOW);
digitalWrite (d,HIGH);
delay(1000);
digitalWrite (e,LOW);
digitalWrite (f,HIGH);
delay(1000);
digitalWrite (g,LOW);
digitalWrite (h,HIGH);
delay(1000);
digitalWrite (i,LOW);
digitalWrite (j,HIGH);
delay(1000);


}
