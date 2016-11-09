int pin = A0;
int data;

void setup() {
  Serial.begin(9600);  
}

void loop() {
  data = analogRead(pin);
  Serial.println(data);
  delay(100);  
}
