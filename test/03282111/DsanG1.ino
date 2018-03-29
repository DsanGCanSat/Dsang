//Libraries
#include <TinyGPS.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SoftwareSerial.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include <Adafruit_BNO055.h>
//#include <Adafruit_GPS.h>
#include <utility/imumaths.h>


const int chipSelect = 10;
Sd2Card card;


// BNO Configuration
Adafruit_BNO055 bno = Adafruit_BNO055(55);

// BMP Configuration
Adafruit_BMP280 bmp;

// GPS Configuration
//SoftwareSerial mySerial(3, 2);
//TinyGPS GPS;
//Adafruit_GPS GPS(&mySerial);
//#define GPSECHO  false
//boolean usingInterrupt = false;
//void useInterrupt(boolean);

//XBee Configuration
SoftwareSerial xbee(3,4);

void setup() 
{

  Wire.begin();
  Serial.begin(9600);
  saveData("DsanG Code");
  xbee.begin(9600);

  //mySerial.begin(9600);

  //GPSInit();

  Begin();
  
  bno.setExtCrystalUse(true);

  saveData("Setup Terminated");

}

/*SIGNAL(TIMER0_COMPA_vect) {
  char c = GPS.read();
#ifdef UDR0
  if (GPSECHO)
    if (c) UDR0 = c;  
#endif
}*/

char c;
uint32_t timer = millis();

void loop() 
{

  timer = millis();

  saveData((String)"Millis: " + millis());
 
  //readGPS();
  
  //getGPS();
  //delay(450);
  getBNO();
  getBMP();
  getMPX();
  saveData("");
  
  while( millis() - timer < 1000 ) {}

}
