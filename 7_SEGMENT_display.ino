int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int h=9;
void setup() {
  // put your setup code here, to run once:
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
pinMode(h,OUTPUT);
}
void dis(int value){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(h,HIGH);

 if(value == 0){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(h,LOW);
 }
  if(value == 1){
    digitalWrite(c,LOW);
    digitalWrite(b,LOW);
  }
  if(value == 2){
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(g,LOW);
    digitalWrite(h,LOW);
  }
  if(value == 3){
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(g,LOW);
  }
  if(value == 4){
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW); 
    digitalWrite(h,LOW);
  }
  if(value == 5){
    digitalWrite(a,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
  }
  if(value == 6){
    digitalWrite(a,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    digitalWrite(h,LOW);
  }
  if(value == 7){
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
  }
  if(value == 8){
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    digitalWrite(h,LOW);
  }
  if(value == 9){
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
  }
 
}
void loop(){
  // put your main code here, to run repeatedly:
dis(0);
delay(200);
dis(1);
delay(200);
dis(2);
delay(200);
dis(3);
delay(200);
dis(4);
delay(200);
dis(5);
delay(200);
dis(6);
delay(200);
dis(7);
delay(200);
dis(8);
delay(200);
dis(9);
delay(200);

}
