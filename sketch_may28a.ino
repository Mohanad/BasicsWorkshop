#include <SoftwareSerial.h>
//SoftwareSerial serial(2,3);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
int val;
void loop() {
  // put your main code here, to run repeatedly:
  //Serial.write("test\r\n");
  val = analogRead(0);
  Serial.println(val);
  if(val > 500){
    digitalWrite(13, LOW);
  }else{
    digitalWrite(13, HIGH);
  }
}
