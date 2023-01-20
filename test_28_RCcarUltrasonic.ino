#include <Servo.h>
/* L9110s 모터드라이버
   오른쪽모터
   L9110s A_1A D6
   L9110s A_1B D11
   왼쪽모터
   L9110s B_1A D3
   L9110s B_1B D5
*/
int A_1A = 6;
int A_1B = 11;
int B_1A = 3;
int B_1B = 5;
/*
   초음파센서
   초음파센서 TRIG - D8
   초음파센서 ECHO - D9
*/
int trigPin = 8;
int echoPin = 9;
/*
   서보모터
   서보모터 OUT - D10
*/
int servoPin = 10;

Servo servo;

//모터의 좌우 속도가 다를 경우, 
//아래의 변수를 조정하여 해결할 수 있습니다.

int motorASpeed = 150; // 모터A 속도 (0~255)
int motorBSpeed = 150; // 모터B 속도 (0~255)

void setup() {
  // 문제발생시 테스트를 위해 시리얼모니터를 시작합니다.
  Serial.begin(9600);
  //핀을 초기화합니다.
  //L9110S 모터드라이버의 핀들을 출력으로 변경합니다.
  pinMode(A_1A, OUTPUT);
  pinMode(A_1B, OUTPUT);
  pinMode(B_1A, OUTPUT);
  pinMode(B_1B, OUTPUT);
  digitalWrite(A_1A, LOW);
  digitalWrite(A_1B, LOW);
  digitalWrite(B_1A, LOW);
  digitalWrite(B_1B, LOW);

  //초음파센서를 초기화합니다. Trig
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  //서보모터를 연결합니다.
  servo.attach(servoPin);

  //초기에 서보를 정면을 봅니다
  servo.write(90);
  delay(2000);

  servo.write(30);
}

void loop() {
}
