#define ledPin 5
int ledState = LOW;
int touchPrevious = 0;

void setup() {
  pinMode(4,INPUT);  // touchSensor
  pinMode(ledPin,OUTPUT); // LED
  Serial.begin(9600);
}

void loop() {
  int touchCurrent = digitalRead(4);
  //Serial.println(touchCurrent);
  if(touchPrevious == 0 and touchCurrent == 1) {
    // ledState 판단하여 HIGH면 LOW, LOW면 HIGH로 변경
    if(ledState == LOW){
        ledState = HIGH;
    } else {
        ledState = LOW;
    }
    Serial.print("LED 상태 : ");
    Serial.println(ledState);
  }
  digitalWrite(ledPin,ledState);
  touchPrevious = touchCurrent;
}
