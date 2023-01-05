#include <Servo.h>

// 서보모터 선언
Servo myServo;

void setup() {
  Serial.begin(9600);
  // 서보모터에 연결한 필 설정
  myServo.attach(9);
  delay(3000);  
}

void loop() {
  if(Serial.available() > 0) {
    char start = Serial.read();
    if(start == 's') {
        for(int i=0; i<=180; i++){
          myServo.write(i);
          Serial.println(myServo.read());
          delay(30);
        }
        delay(2000);
        for(int i=180; i>=90; i-=5){
          myServo.write(i);
          delay(30);
        }
        Serial.println(myServo.read());
    }   
  } 
}
  
