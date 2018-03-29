/*void GPSInit()
{
  
  GPS.begin(9600);
  GPS.sendCommand(PMTK_SET_NMEA_OUTPUT_RMCGGA);
  GPS.sendCommand(PMTK_SET_NMEA_UPDATE_1HZ); 
  GPS.sendCommand(PGCMD_ANTENNA);
  useInterrupt(true);

  delay(1000);

  mySerial.println(PMTK_Q_RELEASE);
  
}*/

void Begin()
{

  if(!bmp.begin()) Send("BMP ERROR");
  if(!bno.begin()) Send("BNO ERROR");
  //if (!card.init(SPI_HALF_SPEED, chipSelect)) Send("SD ERROR");
  
}

bool SDBegin()
{

  //if (!card.init(SPI_HALF_SPEED, chipSelect)) return false;
  //return true;
  return false;
}

