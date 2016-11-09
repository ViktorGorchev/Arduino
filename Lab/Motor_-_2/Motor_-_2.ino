int pinEN = 3;
int pin1A = 4;
int pin2A = 5;

int pinPos = A5;
int posReading = 0;

int bottonPin = 2;
int bottonState = LOW;
int lastBottonState = LOW;
long lastDebounce = 0;
long deboucePeriod = 50;

unsigned long lastMillis = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinEN, OUTPUT);
  pinMode(pin1A, OUTPUT);
  pinMode(pin2A, OUTPUT);
  pinMode(bottonPin, INPUT);
}

void loop() { 
  int reading = digitalRead(bottonPin); 
  if(reading != lastBottonState){
    lastDebounce = millis();
  }

  if(millis() - lastDebounce > deboucePeriod){
    if(reading != bottonState){
      bottonState = reading;
    }
  }
  
  if(lastBottonState == LOW){
    motorLeft();
    Serial.println("Left");
  }

  if(lastBottonState == HIGH){
    motorRight();
    Serial.println("-->Right");
  }
}

void checkReading(){
  posReading = analogRead(pinPos);
  posReading = map(posReading, 0, 1023, 150, 255);   
  if(posReading < 155){
    posReading = 0;
  }

  //Serial.println(posReading);
}

void motorRight(){
  digitalWrite(pin1A, HIGH);
  digitalWrite(pin2A, LOW);
  digitalWrite(pinEN, posReading);
}

void motorLeft(){
  digitalWrite(pin1A, LOW);
  digitalWrite(pin2A, HIGH);
  digitalWrite(pinEN, posReading);
}

void motorStop(){
  analogWrite(pinEN, 0);
}



  

   
  //checkReading();
  //motorRight();
//  delay(1000);
//
//  checkReading();
//  motorLeft();
//  delay(3000);
//  
//  motorStop();
//  delay(1000);
