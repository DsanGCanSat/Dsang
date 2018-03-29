void saveData(String dump) {

  Send((String)dump);

  if( SDBegin() )
  {
    File dataFile = SD.open("dump.csv", FILE_WRITE);
    dataFile.println(dump);
    dataFile.close();
  }
  
}

void Send(String data)
{

  Serial.println(data);
  xbee.println(data);
  
}

