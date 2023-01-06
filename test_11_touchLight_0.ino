void setup() {
  pinMode(4,INPUT);  // touchSensor
  pinMode(5,OUTPUT); // LED
  Serial.begin(9600);
}

void loop() {
  int touchCurrent = digitalRead(4);
  Serial.println(touchCurrent);
  if(touchCurrent == 1) {
    digitalWrite(5,HIGH);
  } else {
    digitalWrite(5,LOW);
  }

}
