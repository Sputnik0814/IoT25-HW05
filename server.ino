#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>

BLEAdvertising *pAdvertising;

// BLE Advertiser 설정
void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE Advertiser...");

  BLEDevice::init("ESP32_BLE_Advertiser");
  BLEServer *pServer = BLEDevice::createServer();
  
  pAdvertising = BLEDevice::getAdvertising();
  pAdvertising->setScanResponse(true);
  pAdvertising->setMinPreferred(0x06); 
  pAdvertising->setMinPreferred(0x12); 
  pAdvertising->start();

  Serial.println("BLE Advertising started...");
}

void loop() {
  // 광고만 실행
  delay(1000);
}
