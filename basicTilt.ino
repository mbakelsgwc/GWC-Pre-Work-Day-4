/*
Basic Tilt
By Michelle Bakels
Modify behavor of tilt pin

*** unable to test. 3/4 alligator clips
*/

int tiltPin = 10;
int tiltState;
int ledPin = A8;
int vibePin = 11;

void setup() {
  pinMode(tiltPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  pinMode(vibePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  tiltState = digitalRead(tiltPin);
  Serial.println(tiltState);
  digitalWrite(ledPin, tiltState);
  digitalWrite(vibePin, tiltState);
}
