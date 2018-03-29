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
