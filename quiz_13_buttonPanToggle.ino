#define btn 9
#define pan 11
int btnPrevious = 0;
int panState = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(btn,INPUT);
  pinMode(pan,OUTPUT);
}

void loop() {
  // 버튼 상태를 읽어들여 btnCurrent 변수에 저장하기
  int btnCurrent = digitalRead(btn);
  
  // 버튼 토글 판단
  if(btnPrevious == 0 and btnCurrent == 1){
     panState = !panState;
     Serial.println(panState? "팬 회전 중" : "팬 정지");      
  }
  digitalWrite(pan,panState);
  btnPrevious = btnCurrent;
}
