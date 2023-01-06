void setup() {
  pinMode(4,INPUT);
  Serial.begin(9600);
}

void loop() {
  int touch = digitalRead(4);
  Serial.println(touch);

}
