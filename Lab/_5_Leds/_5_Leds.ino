int led1 = 3;
int led2 = 5;
int led3 = 6;
int led4 = 9;
int led5 = 10;

int posIn = A5;
int posData;

void setup() {  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);  
  Serial.begin(9600);
}


void loop() {
  posData = analogRead(posIn);
  Serial.println(posData);
  if(posData < 200){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    
  }else if(posData < 400){
    digitalWrite(led1, HIGH);

    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    
  }else if(posData < 600){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    
  }else if(posData < 800){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
   
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    
  }else if(posData < 1000){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    
    digitalWrite(led5, LOW);
    
  }else{
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
  }   
}
