int ledPin = 9;

int light = 255;

void setup() {
  // put your setup code here, to run once:
 
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledPin, light);
  light = light - 1;
  delay(7);

  if  (light == 0){
    light = 255;
  }
}
