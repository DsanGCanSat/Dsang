/*
  Connections:
    a) BNO055
      SCL -> SCL (A5 sur UNO, D3 sur Micro)
      SDA -> SDA (A4 sur UNO, D2 sur Micro)
      Vin -> 5V
      GND -> GND
  
    b) XBee
      5V -> 5V
      GND -> GND
      TX -> D5
      RX -> D4
        
    c) BMP280
      VIN -> 5v
      GND -> GND
      SCK -> SCL (A5 sur UNO, D3 sur Micro)
      SDI -> SDA (A4 sur UNO, D2 sur Micro)
  
    d) SD
      5V -> 5V
      GND -> GND
      CLK -> D13
      DO -> D12
      DI -> D11
      CS -> D10
  
    e) GPS (?????)
      VIN -> 5V
      GND -> GND
      RX > D7
      TX -> D8

    f) MPX
      P2 -> 5V
      P3 -> GND
      P4:
        MPX_Haut -> A0
        MPX_Bas -> A1

  Format:

    a) BNO
      BNO: OrientationX-OrientationX-OrientationX

    c) BMP280
      BMP: Temp-Pres-Alt

    e) GPS
      GPS: Lat-Lon

    f) MPX
      MPX: MPX_Haut-MPX_Bas
 */












 /*
  * Nano2 - Nano1
  * A5 - A5
  * A4 - A4
  * GND - GND
  * VIN - 5V
  * 
  * BMP - Nano1
  * Vin - 5V
  * GND - GND
  * SCK - A5
  * SDI - A4
  * 
  * BNO - Nano1
  * Vin - 5V
  * GND - GND
  * SDA - A4
  * SCL - A5
  * 
  * SD - Nano1
  * 5V - 5V
  * GND - GND
  * CLK - D13
  * DO - D12
  * DI - D11
  * CS - D10
  * 
  * XBEE - Nano1
  * 5V - 5v
  * GND - GND
  * RX - D3
  * TX - D4
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * */
  */
