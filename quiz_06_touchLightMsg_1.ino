#define ledPin 5
int ledState = LOW;     // LOW == 0
int touchPrevious = 0;  // false == 0

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
    
    if(ledState == HIGH){
      Serial.println("현재 LED 상태 : on");
    } else {
      Serial.println("현재 LED 상태 : off");
    }
  }
  
  digitalWrite(ledPin,ledState);
  touchPrevious = touchCurrent;
}
