/*
  PLA-RAILS-POINT-Servo-programs
  5pin-SW  10pin-Servo data

*/
#include <Servo.h>
Servo myServo;

void setup(){
  myServo.attach(10, 500, 2400);           //10pin servo Data//
  myServo.write(90);                       //origine--center return//
  pinMode(5,INPUT_PULLUP);                 //5pin SW 5-GND connect//
  pinMode(6,INPUT_PULLUP);
  Serial.begin(9600);
}
void loop(){
  
  int Push_A = digitalRead(5);
  int Push_B = digitalRead(6);
  
        if ( Push_A ==  LOW ){ 
          myServo.write( 109 );
          Serial.println("109");
        }
  
        if ( Push_B ==  LOW ){ 
          myServo.write( 85 );
          Serial.println("85");
        }
  
  delay(100);
}//loop end
