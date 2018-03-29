//Libraries
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SoftwareSerial.h>
#include <Adafruit_GPS.h>




const int chipSelect = 10;
Sd2Card card;

// GPS Configuration
SoftwareSerial mySerial(3, 2);
Adafruit_GPS GPS(&mySerial);

#define GPSECHO  true
boolean usingInterrupt = false;
void useInterrupt(boolean);

void setup() 
{

  Wire.begin();
  Serial.begin(9600);
  saveData("DsanG Code2");

  GPSInit();

  Begin();

  saveData("Setup Terminated");

}

SIGNAL(TIMER0_COMPA_vect) {
  char c = GPS.read();
  // if you want to debug, this is a good time to do it!
#ifdef UDR0
  if (true)
    if (c) UDR0 = c;  
    // writing direct to UDR0 is much much faster than Serial.print 
    // but only one character can be written at a time. 
#endif
}


uint32_t timer = millis();
char c;
void loop() 
{

  readGPS();
  
  getGPS();

  Send("Hello");
  
  delay(10);

  
}
