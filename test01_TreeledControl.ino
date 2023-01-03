void setup() {
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(4,OUTPUT);

}

void loop() {
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(4,HIGH);
  delay(2000);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(7,LOW);
  delay(500);
  digitalWrite(4,LOW);
  delay(500);

}
