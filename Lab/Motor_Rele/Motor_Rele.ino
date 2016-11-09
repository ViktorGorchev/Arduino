int motorPin = 3;

void setup() {
   Serial.begin(9600); 
   pinMode(motorPin, OUTPUT);
}

void loop() {  
  digitalWrite(motorPin, HIGH);  
  delay(3000);

  digitalWrite(motorPin, LOW);  
  delay(3000);
 }
