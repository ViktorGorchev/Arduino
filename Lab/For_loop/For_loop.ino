int led1 = 3;

void setup() {  
}

void loop() {
  for(int i = 0; i < 255; i++){
    analogWrite(led1, i);
    delay(45);
  } 
}
