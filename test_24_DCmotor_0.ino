int motorSpeed = 200;

void setup() {
  Serial.begin(9600);  
}

void loop() {
  if(Serial.available()){
     char cmd = Serial.read();

     if(cmd == '1'){
      Serial.println("1");
      analogWrite(6,motorSpeed);
      analogWrite(11,0);
     }
     
     if(cmd == '2'){
      Serial.println("2");
      analogWrite(6,0);
      analogWrite(11,motorSpeed);     
     }
     
     if(cmd == '0'){
      Serial.println("0");
      analogWrite(6,0);
      analogWrite(11,0); 
     }         
  }
}
