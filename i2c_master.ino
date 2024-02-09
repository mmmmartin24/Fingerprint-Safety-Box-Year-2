#include <Servo.h>
#include <Wire.h>
#define SLAVE1_ADDRESS 0x9A


Servo myservo;
int pos = 0;
int led_pin = 13;
int lock_state = 0;
void setup()
{
  Wire.begin();
  Serial.begin(9600);
  myservo.attach(9);
  pinMode(led_pin,OUTPUT);

}

void loop()
{
  Wire.requestFrom(SLAVE1_ADDRESS,1);
    if (Wire.available()){
      lock_state = Wire.read();
      Serial.println(lock_state);
    }
  delay(500);

     
     if (lock_state == 1){
      digitalWrite(13, HIGH);
      myservo.write(90);
      delay(15000); 
      myservo.write(-90);
     }
     if (lock_state == 0){
       digitalWrite(13, LOW);
   delay(500);
  }
  
}
