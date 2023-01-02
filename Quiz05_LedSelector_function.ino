void setup() {
    Serial.begin(9600);
    pinMode(7,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(5,OUTPUT);

    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    delay(1000);

    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
}

void loop() {
  if(Serial.available() > 0) {
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);

    char choice = Serial.read();

    if(choice == 'r') {
      digitalWrite(7,HIGH);
    } else if(choice == 'g') {
      digitalWrite(6,HIGH);
    } else if(choice == 'b') {
      digitalWrite(5,HIGH);
    }
  }
}

void LedAllOff() {
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
}

void LedAllOn() {
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
}
