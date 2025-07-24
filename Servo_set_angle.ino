/*
5pin-6pinをショートさせると、servoの角度が50msごとに上下する。


*/
#include <Servo.h>
Servo myServo;
int KAKUDO=90;//グローバル変数でkakudo設定

void setup() {
  myServo.attach(10, 500, 2400);           //10番pinにservo
  pinMode(10,OUTPUT);
  myServo.write(90);            //原点109~85
  pinMode(5,INPUT_PULLUP);     //5pin up
  pinMode(6,INPUT_PULLUP);     //6pin dw
  Serial.begin(9600);
}

void loop() {
  myServo.write  ( KAKUDO ) ;            //servoに紐づけ
  Serial.println ( KAKUDO ) ;            //write
  
  if(LOW==digitalRead(5)) { KAKUDO+=1;}  //5番ショートでup
  if(LOW==digitalRead(6)) { KAKUDO-=1;}  //6番ショートでdw
  delay(50);
}//loop end
