void setup() {     
  Serial.begin(9600); 

  
  for(int i = 0; i < 10; i++){
    //reads noise from the background and gives a number
    randomSeed(analogRead(A0));
    int rnd = random(50);
    Serial.println(rnd);
    delay(200);
  }
  
}

void loop() {  
}
