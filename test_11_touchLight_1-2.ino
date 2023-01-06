#define ledPin 5
int ledState = LOW;

void setup() {
  pinMode(4,INPUT);  // touchSensor
  pinMode(ledPin,OUTPUT); // LED
  Serial.begin(9600);
}

void loop() {
  int touchCurrent = digitalRead(4);
  Serial.println(touchCurrent);
  if(touchCurrent == 1) {
    ledState = HIGH;
  } else {
    ledState = LOW;
  }
  digitalWrite(ledPin,ledState);
}
