void saveData(String dump) {

  Send((String)dump);
  
}

void Send(String data)
{

  Serial.println(data);

  const char* Data = data.c_str();

  Serial.println(Data);
  
  Wire.beginTransmission(14);

  for( int i = 0; i < strlen(Data); i++ )
  {

    Wire.write(Data[i]);
    Serial.println((int)Data[i]);
    Serial.println((int)Data[i]);
    
  }
  
  Wire.endTransmission();
  delay(100);
  
}

