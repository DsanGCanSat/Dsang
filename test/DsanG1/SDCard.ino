void saveData(String dump) {

  Send((String)dump);
  
  File dataFile = SD.open("ATT.TXT", FILE_WRITE);

  //if( dataFile )
  //{
    dataFile.println(dump);
    dataFile.close();
  //} //else Send("SD ERROR");
  
}

void Send(String data)
{

  Serial.println(data);
  xbee.println(data);
  
}

