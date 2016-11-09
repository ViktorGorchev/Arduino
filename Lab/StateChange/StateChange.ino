int led1 = 3;
int ledState = LOW;

int bottonIn = 11;
int bottonState = LOW;
int lastBottonState = LOW;

void setup() {  
  pinMode(led1, OUTPUT);
  pinMode(bottonIn, INPUT);
  Serial.begin(9600); 
}

void loop() {
  bottonState = digitalRead(bottonIn);
  if(bottonState != lastBottonState){
    if(bottonState == HIGH){
      if(ledState == LOW){
        ledState = HIGH;
      }else{
        ledState = LOW;
      }

      digitalWrite(led1, ledState);
    }

    delay(50);
  }

  lastBottonState = bottonState;
}
