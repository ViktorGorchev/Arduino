int bottonPin = 10;
int ledPin = 13;
int bottonData;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(bottonPin, INPUT);
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
    bottonData = digitalRead(bottonPin);
    if (bottonData == HIGH){
      
      digitalWrite(ledPin, HIGH);
    }
    
    if (bottonData == LOW){      
      digitalWrite(ledPin, LOW);
    }
}
