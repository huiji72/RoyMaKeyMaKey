// Use this file for calibrating the Roy servos
#include <Servo.h> 
 
 // a maximum of eight servo objects can be created 
#include "Arduino.h"
void setup();
void loop();

void thumb(int x);
void palm(int x);
void index(int x);
void middle(int x);
void ring(int x);
void pinky(int x);

Servo thumbServo;
Servo palmServo;
Servo indexServo;
Servo middleServo;
Servo ringServo;
Servo pinkyServo;
 
void setup() { 
  Serial.begin(9600);

  palmServo.attach(7);
  thumbServo.attach(6); 
  indexServo.attach(5);  
  middleServo.attach(4);  
  ringServo.attach(3);
  pinkyServo.attach(2); 

  palm(0);
  thumb(0);
  index(0);
  middle(0);
  ring(0);
  pinky(0);

  delay(1000);

//  thumb(1);
//  index(1);
//  middle(1);
  ring(1);
  pinky(1);

  delay(1000);

//  thumb(0);
//  index(0);
//  middle(0);
  ring(0);
  pinky(0);
  delay(1000);

  thumb(1);
  index(1);
  middle(1);
  ring(1);
  pinky(1);

  delay(1000);
  return;

  thumb(0);
  index(1);
  middle(1);
  ring(1);
  pinky(1);

  delay(1000);
  
  thumb(1);
  thumb(0);
  palm(1);  
  palm(0);

  delay(1000);
  
  thumb(0);
  thumb(1);
  palm(0);  
  palm(1);
    

  thumb(1);
  delay(100);
  index(1);
  delay(100);
  middle(1);
  delay(100);
  ring(1);
  delay(100);
  pinky(1);

  delay(1000);
  
  thumb(0);
  index(0);
  middle(0);
  ring(0);
  pinky(0);

  delay(1000);

  thumb(1);
  delay(100);
  index(1);
  delay(100);
  middle(1);
  delay(100);
  ring(1);
  
  delay(1000);

  
  pinky(1);
  thumb(0);
  index(0);
  middle(0);
  ring(0);
  pinky(0);

//  middle(0);
//  pinky(0);

//  thumb(1);
//  index(1);
//  middle(1);
//  pinky(1);
//
//  delay(1000);
  thumb(1);
  index(1);
  middle(0);
  ring(1);
  pinky(1);
} 
 
 
void loop() {
//  thumb(1);
//  index(1);
//  middle(1);
//  ring(1);
//  pinky(1);
//  delay(1000);
//
//  delay(1000);
}


// Action functions: 0 - open, 1 - clenched
void palm(int x) { palmServo.write(x == 0 ? 180 : 40); }
void thumb(int x) { thumbServo.write(x == 0 ? 10 : 130); }
void index(int x) { indexServo.write(x == 0 ? 180 : 0); }
void middle(int x) { middleServo.write(x == 0 ? 0 : 160); }
void ring(int x) { ringServo.write(x == 0 ? 0 : 130); }
void pinky(int x) { pinkyServo.write(x == 0 ? 160 : 0); }
