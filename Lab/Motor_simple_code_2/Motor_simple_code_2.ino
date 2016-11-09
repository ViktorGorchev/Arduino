int motorPin = 3;
int posPin = A5;
int posReading = 0;

void setup() {
   Serial.begin(9600); 
   pinMode(motorPin, OUTPUT);
}

void loop() {
  posReading = analogRead(posPin);   
  posReading = map(posReading, 0, 1023, 150, 255); 
  Serial.println(posReading);
  if(posReading < 155){
    posReading = 0;
  }
  
  analogWrite(motorPin, posReading);  
 }
