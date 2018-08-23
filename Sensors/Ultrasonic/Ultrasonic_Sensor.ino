#define trigpin 13
#define echopin 12

void setup() {
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
}

void loop() {
  long duration,distance;
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  duration = pulseIn(echopin,HIGH);
  distance = (duration/2)/29.1;

  if (distance >= 200 || distance <= 0) {
    Serial.println("Out of Range");
  } else {
    Serial.print(distance);
    Serial.println("cm");
  }
  delay(500);
}
