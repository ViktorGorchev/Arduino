//#define BLYNK_DEBUG
#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space
#include <ESP8266_SoftSer.h>
#include <BlynkSimpleShieldEsp8266_SoftSer.h>

#include <SoftwareSerial.h>

SoftwareSerial EspSerial(8, 7); // RX, TX
ESP8266 wifi(EspSerial);

char auth[] = "9bf89067fa5f48dbba9a0b6dbd55eb20";
char networkName[] = "HTC Portable Hotspot 6283";
char password[] = "0EA7DBBC29457";

int lampPin = 9;
int lampState;
int redLedPin = 10;
int greenLedPin = 11;
int yellowLedPin = 12;

int lightSensor = A0;
int lightSensorReading;

void setup()
{
  pinMode(lampPin, OUTPUT); 
  pinMode(redLedPin, OUTPUT); 
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);  
  
  Serial.begin(9600);  
  delay(10);
  
  EspSerial.begin(9600);
  delay(10);

  Blynk.begin(auth, wifi, networkName, password);
}

void loop()
{
  Blynk.run();
  lampState = digitalRead(lampPin);
  lightSensorReading = analogRead(lightSensor);

  updateYellowLed(lampState);

  updateGreenLed(lightSensorReading);    
}

void updateYellowLed(int lampState){
  if(lampState == HIGH){
    digitalWrite(yellowLedPin, HIGH);
  }else{
    digitalWrite(yellowLedPin, LOW);
  }
}

void updateGreenLed(int lightSensorReading){
  int mappedReading = map(lightSensorReading, 0, 1023, 0, 255);
  analogWrite(greenLedPin, mappedReading);
}
