int led1 = 3;

int posIn = A5;
int posData;

int bottonIn = 11;
int bottonData;

void setup() {  
  pinMode(led1, OUTPUT);
  pinMode(bottonIn, INPUT);
  Serial.begin(9600);
}

void loop() {
  posData = analogRead(posIn);
  bottonData = digitalRead(bottonIn);
  
  if(posData > 600){
    digitalWrite(led1, HIGH); 
     
    while(bottonData == HIGH){    
    digitalWrite(led1, LOW); 
    delay(1000);
    digitalWrite(led1, HIGH); 
    delay(1000);    
    bottonData = digitalRead(bottonIn);
    }
    
  } else{
    digitalWrite(led1, LOW); 
  }
}
