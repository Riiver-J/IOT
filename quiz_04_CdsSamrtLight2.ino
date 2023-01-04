void setup() {
  Serial.begin(9600);
  // 핀 모드 지정
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT); 
}

void loop() {
  // Cds 센서값을 저장할 변수 선언 및 값 할당
  int lightValue = analogRead(A0);
  
  // 환경에 따라 Cds 센서값 확인
  Serial.println(lightValue);

  // LED All OFF 초기화, 밝을 때
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  
  // 파악된 Cds 센서값에 따라 조건값 지정
  if(lightValue <= 700) {  // 많이 어두울 때
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
   
  } else if ( lightValue  <= 800) {  // 어두울 때
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
  
  } else if (lightValue <= 1000) {  // 약간 어두울 때
    digitalWrite(7,HIGH); 
  }
}
