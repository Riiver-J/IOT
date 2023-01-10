#include <SoftwareSerial.h>
int BT_TX = 12;
int BT_RX = 13;

//SoftwareSerial(RX,TX)
SoftwareSerial BTSerial(BT_TX, BT_RX);

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
}

void loop() {
  // 컴퓨터(시리얼모니터) => 아두이노 => 블루투스 모듈 
  if(Serial.available()>0) {
    BTSerial.write(Serial.read());
  }
  // 블루투스 모듈 => 아두이노 => 컴퓨터(시리얼 모니터)
  if(BTSerial.available() > 0 ){
    Serial.write(BTSerial.read());
  }
}
