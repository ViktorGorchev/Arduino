int pin = A0;
int ledPin = 9;
int secondLedPin = 10;
int data;

void setup() {
  Serial.begin(9600);   
}

void loop() {
  data = analogRead(pin);
  Serial.println(data);
  delay(100);  

  int mapData = map(data, 0, 1023, 0, 255);
  analogWrite(ledPin, mapData);

  int secondMapData = map(data, 0, 1023, 255, 0);
  analogWrite(secondLedPin, secondMapData);
}
