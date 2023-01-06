#define echo 6
#define trig 7

void setup() {
  Serial.begin(9600);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
}

void loop() {
   digitalWrite(trig,LOW);
   delayMicroseconds(2);
   digitalWrite(trig,HIGH);
   delayMicroseconds(10);
   digitalWrite(trig,LOW);
  
   // 물체와의 왕복 소요 시간(microsconds);
   long duration = pulseIn(echo, HIGH);
   Serial.print(duration);
   Serial.println(" microseconds");
  
   // 물체와의 거리(cm) 환산
   long distance = 0.017 * duration;
   Serial.print(distance);
   Serial.println(" cm");
   delay(1000);
} 
