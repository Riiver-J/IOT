#define ledPin 5
int ledState = LOW;     // LOW == 0
int touchPrevious = 0;  // false == 0

void setup() {
  pinMode(4,INPUT);  // touchSensor
  pinMode(ledPin,OUTPUT); // RredLED
  pinMode(ledPin+1,OUTPUT); // GreenLED
  pinMode(ledPin+2,OUTPUT); // BlueLED
  Serial.begin(9600);
}

void loop() {
  int touchCurrent = digitalRead(4);
  //Serial.println(touchCurrent);
  if(touchPrevious == 0 and touchCurrent == 1) {
    // ledState 판단하여 HIGH면 LOW, LOW면 HIGH로 변경
   ledState = !ledState;
   Serial.println(ledState? "현재 LED 상태 : on": "현재 LED 상태 : off");
  }
  
  digitalWrite(ledPin,ledState);
  digitalWrite(ledPin+1,ledState);
  digitalWrite(ledPin+2,ledState);
  touchPrevious = touchCurrent;
}
