#define pan 11

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){
    char speedChoice = Serial.read();
    
    // speedChoice 변수 값에 따라 모터 속도 변경
    // '1' 이면 120
    if(speedChoice == '1'){
      analogWrite(pan,120);
    // '2' 이면 255
    } else if(speedChoice == '2'){
      analogWrite(pan,255);
    // 그 이외의 값은 0
    } else {
      analogWrite(pan,0);
    }
  }
}
