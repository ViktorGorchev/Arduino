///butona ne raboti

int bottonIn = 11;
int bottonState;
int lastBottonState = LOW;

int count = 0;
long lastDebounce = 0;
long deboucePeriod = 50;

unsigned long lastMillis = 0;

void setup() {    
  pinMode(bottonIn, INPUT);
  Serial.begin(9600); 
}

void loop() {
  int reading = digitalRead(bottonIn);
 
  if(reading != lastBottonState){
    lastDebounce = millis();
  }

  if(millis() - lastDebounce > deboucePeriod){
    if(reading != bottonState){
      bottonState = reading;
    }

    if(bottonState == HIGH){
      count++;
      Serial.println(count);
    }
  }
  
  lastBottonState = reading;  
}
