#include <MPU6050.h>
#include <Wire.h>

MPU6050 MPU;

int ivmeX , ivmeY , ivmeZ , GyroX , GyroY , GyroZ;


void setup() {

  Serial.begin(9600);
  Wire.begin();
  MPU.initialize();

}

void loop() {

  MPU.getAcceleration(&ivmeX, &ivmeY, &ivmeZ);
  MPU.getRotation(&GyroX, &GyroY, &GyroZ);
  
  Serial.println(" ");
  Serial.print("ivmeX= ");
  Serial.println(ivmeX);
  
  Serial.print("ivmeY= ");
  Serial.println(ivmeY);
  
  Serial.print("ivmeZ= ");
  Serial.println(ivmeZ);
  Serial.println(" ");
  Serial.print("GyroX= ");
  Serial.println(GyroX);
  
  Serial.print("GyroY= ");
  Serial.println(GyroY);
  
  Serial.print("GyroZ= ");
  Serial.print(GyroZ);
  Serial.println(" ");
  
  delay(500);

}
