#include <SoftwareSerial.h>
SoftwareSerial bluetoothSerial(12,13);

int motorSpeed = 200;

void setup() {
  Serial.begin(9600);
  bluetoothSerial.begin(9600); 
  /*  right motor
   *  A_1A : 6
   *  A_1B : 11
   *  left motor
   *  B_1A : 3
   *  B_1B : 5
   */
}

void loop() {
  if(bluetoothSerial.available()){
     char cmd = bluetoothSerial.read();

     if(cmd == 'f'){
      Serial.println("forward");
      analogWrite(6,motorSpeed);
      analogWrite(11,0);     
      analogWrite(3,motorSpeed);
      analogWrite(5,0);
     }
     
     if(cmd == 'b'){
      Serial.println("backward");
      analogWrite(6,0);
      analogWrite(11,motorSpeed);      
      analogWrite(3,0);
      analogWrite(5,motorSpeed);     
     }
     
     if(cmd == 's'){
      Serial.println("stop");
      analogWrite(6,0);
      analogWrite(11,0);  
      analogWrite(3,0);
      analogWrite(5,0);     
     }

      if(cmd == 'r'){
      Serial.println("right Direction left wheel");
      analogWrite(6,0);
      analogWrite(11,0);  
      analogWrite(3,motorSpeed);
      analogWrite(5,0);     
     }
     
      if(cmd == 'l'){
      Serial.println("left Direction right wheel");
      analogWrite(6,motorSpeed);
      analogWrite(11,0);  
      analogWrite(3,0);
      analogWrite(5,0);     
     }    
  }
}
