#include <SoftwareSerial.h>
// Program to Check Push button functionality.
void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}
int val;
void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2)){
    digitalWrite(13, HIGH);
  }else{
    digitalWrite(13, LOW);
  }
}
