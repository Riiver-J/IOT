void setup() {
  Serial.begin(9600);
  pinMode(7,OUTPUT);
}

void loop() {
  int lightValue = analogRead(A0);  //A0에있는센서값읽어
  Serial.println(lightValue);
//  delay(500);
  if(lightValue <= 300) {
  //조도 센서값은 변수가 가지고있으므로
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    delay(3000);
  }    else if(lightValue <= 800) {
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
    } else{
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
    }
  }
