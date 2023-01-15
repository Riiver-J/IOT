#define bt_Tx 12
#define bt_Rx 13

#include <SoftwareSerial.h>
SoftwareSerial BTSerial(bt_Tx, bt_Rx);
char oneChar;
String msg;

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
}
void loop() {
  if(Serial.available()){
    BTSerial.write(Serial.read());
  }  
  //블루투스 통신으로 1byte씩 들어오는 것 누적하기
  while(BTSerial.available()){
   oneChar = BTSerial.read();
   msg = msg +oneChar;
   }
   //메시지 누적한 String 타입 msg 출력
   if(!msg.equals("")){
    Serial.print(msg);
    Serial.println("");
    msg="";
   }
}
