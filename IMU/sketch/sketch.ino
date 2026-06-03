#include <Wire.h>

const int MPU = 0x68;

// Raw sensor values
int16_t AcX, AcY, AcZ;
int16_t GyX, GyY, GyZ;
int16_t Temp;

void setup() {
  Serial.begin(115200);

  Wire.begin(21, 22);  // SDA, SCL for ESP32

  // Wake up MPU6050
  Wire.beginTransmission(MPU);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);

  Serial.println("MPU6050 Initialized");
}

void loop() {

  Wire.beginTransmission(MPU);
  Wire.write(0x3B);  // Starting register
  Wire.endTransmission(false);

  Wire.requestFrom(MPU, 14, true);

  AcX = Wire.read() << 8 | Wire.read();
  AcY = Wire.read() << 8 | Wire.read();
  AcZ = Wire.read() << 8 | Wire.read();

  Temp = Wire.read() << 8 | Wire.read();

  GyX = Wire.read() << 8 | Wire.read();
  GyY = Wire.read() << 8 | Wire.read();
  GyZ = Wire.read() << 8 | Wire.read();

  Serial.print("AccX: ");
  Serial.print(AcX);
  Serial.print("  AccY: ");
  Serial.print(AcY);
  Serial.print("  AccZ: ");
  Serial.print(AcZ);

  Serial.print(" | GyX: ");
  Serial.print(GyX);
  Serial.print("  GyY: ");
  Serial.print(GyY);
  Serial.print("  GyZ: ");
  Serial.print(GyZ);

  Serial.print(" | Temp: ");
  Serial.println((Temp / 340.0) + 36.53);

  delay(100);
}