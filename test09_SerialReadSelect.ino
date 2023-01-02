char answer;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0) {
    answer = Serial.read();

    if(answer == 'm') {
      Serial.println("Good Morning!");
    } else if(answer == 'a') {
      Serial.println("Good Afternoon!");
    } else{
      Serial.println("Good Evening!");
    }

    Serial.println("Have a nice day!");
  }
}
