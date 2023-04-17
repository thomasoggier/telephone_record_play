#include <Arduino.h>

#include <SPI.h>
#include <Adafruit_VS1053.h>
#include <SD.h>

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Adafruit VS1053 Simple Test");
  Adafruit_VS1053_FilePlayer musicPlayer = Adafruit_VS1053_FilePlayer(RESET, CS, DCS, DREQ, CARDCS);
}

void loop()
{
  // put your main code here, to run repeatedly:
  Serial.println(".");
  delay(1000);
}