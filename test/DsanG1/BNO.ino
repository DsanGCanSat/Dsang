void getBNO()
{

  saveData((String)"BNO1: " + bno.getTemp());
  
  sensors_event_t event;
  bno.getEvent(&event);
  saveData((String) "BNO2: " + event.orientation.x + "-" + event.orientation.y + "-" + event.orientation.z);
  delay(10);
  
  imu::Quaternion quat = bno.getQuat();
  saveData((String) "BNO3: " + quat.w() + "-" + quat.y() + "-" + quat.x() + "-" + quat.z());
  delay(10);

  //uint8_t system, gyro, accel, mag = 0;
  //bno.getCalibration(&system, &gyro, &accel, &mag);
  //saveData((String)"BNO4: " + system + "-" + gyro + "-" + accel + "-" + mag);
  //delay(10);

  //uint8_t system_status, self_test_results, system_error;
  //system_status = self_test_results = system_error = 0;
  //bno.getSystemStatus(&system_status, &self_test_results, &system_error);
  //saveData((String)"BNO5: " + system_status + "-" + self_test_results + "-" + system_error);
  //delay(10);
  
  imu::Vector<3> magnet = bno.getVector(Adafruit_BNO055::VECTOR_MAGNETOMETER);
  saveData((String) "BNO6: " + magnet.x() + "-" + magnet.y() + "-" + magnet.z());
  delay(10);

  imu::Vector<3> gyrosc = bno.getVector(Adafruit_BNO055::VECTOR_GYROSCOPE);
  saveData((String) "BNO7: " + gyrosc.x() + "-" + gyrosc.y() + "-" + gyrosc.z());
  delay(10);

  imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);
  saveData((String) "BNO8: " + euler.x() + "-" + euler.y() + "-" + euler.z());
  delay(10);
  
  imu::Vector<3> acc = bno.getVector(Adafruit_BNO055::VECTOR_ACCELEROMETER);
  saveData((String) "BNO9: " + acc.x() + "-" + acc.y() + "-" + acc.z());

  imu::Vector<3> lacc = bno.getVector(Adafruit_BNO055::VECTOR_LINEARACCEL);
  saveData((String) "BNO10: " + lacc.x() + "-" + lacc.y() + "-" + lacc.z());

  imu::Vector<3> grav = bno.getVector(Adafruit_BNO055::VECTOR_GRAVITY);
  saveData((String) "BNO11: " + grav.x() + "-" + grav.y() + "-" + grav.z());

}
