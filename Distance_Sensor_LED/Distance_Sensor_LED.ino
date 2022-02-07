#define trigPin 13
#define echoPin 12
#define led1 11
#define led2 10

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  long duration, distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;

  if (distance < 10) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  }

  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  }

  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}
