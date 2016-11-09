int led1 = 3;
int ledState = LOW;
unsigned long lastMillis = 0;
const long intrval = 1000;

void setup() {  
  pinMode(led1, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  unsigned long millisNow = millis();  
  
  if(millisNow - lastMillis >= intrval){    
    lastMillis = millisNow;
    if(ledState == LOW){
      ledState = HIGH;      
    }else{
      ledState = LOW;
    }

    digitalWrite(led1, ledState);
  } 
}
