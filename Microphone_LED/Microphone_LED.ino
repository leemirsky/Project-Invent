/*
 This program uses the digital output of the microphone which just either
 reads sound (high) or no sound (low).
 */

int ledPin = 10;
int microphonePin = 1;
int state = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(microphonePin, INPUT);
}

void loop() {
  state = digitalRead(microphonePin);
  Serial.println(state);

  if (state == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(1000);
  }

  else {
    digitalWrite(ledPin, LOW);
  }
}
