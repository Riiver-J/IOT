#define pan 11
#define btnStop 6
#define btnSpeed1 6
#define btnSpeed2 3
int btnCurrent1;
int btnCurrent2;
int motorSpeed1=0;
int motorSpeed2=0;
int btnPrevious1=0;
int btnPrevious2=0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  btnCurrent1 = digitalRead(btnSpeed1);
  btnCurrent2 = digitalRead(btnSpeed2);
  Serial.println(btnCurrent1);
    Serial.println(btnCurrent2);
  if(btnPrevious1 == 0 and btnCurrent1 == 1){
      if(motorSpeed1 == 0){
        motorSpeed1 = 150;
      }else {
        motorSpeed1 = 0;
      }
  }
  if(btnPrevious2 == 0 and btnCurrent2 == 1){
       if(motorSpeed2 == 0){
        motorSpeed2 = 255;
      }else {
        motorSpeed2 = 0;
      }
  }
  analogWrite(pan,motorSpeed1);
  analogWrite(pan,motorSpeed2);
  btnPrevious1 = btnCurrent1;
  btnPrevious2 = btnCurrent2;
}
