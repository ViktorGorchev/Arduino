int pinEN = 3;
int pin1A = 4;
int pin2A = 5;

void setup() {
  pinMode(pinEN, OUTPUT);
  pinMode(pin1A, OUTPUT);
  pinMode(pin2A, OUTPUT);
}

void loop() {
  digitalWrite(pin1A, HIGH);
  digitalWrite(pin2A, LOW);
  digitalWrite(pinEN, 192);

  delay(1000);

  digitalWrite(pin1A, LOW);
  digitalWrite(pin2A, HIGH);
  digitalWrite(pinEN, 255);

  delay(3000);

  analogWrite(pinEN, 0);
  delay(1000);
}
