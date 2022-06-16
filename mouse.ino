#include <MPU6050_tockn.h>
#include <Wire.h>
#include <Mouse.h>

MPU6050 mpu(Wire);

void setup() {
  Serial.begin(19200);
  Wire.begin();
  mpu.begin();
  mpu.calcGyroOffsets(true);
  //mpu6050.setGyroOffsets(0.75, 0.05, 0.05);
}

void loop() {
  mpu.update();
  float ax = mpu.getAngleX();
  float ay = mpu.getAngleY();
  float az = mpu.getAngleZ();
}
