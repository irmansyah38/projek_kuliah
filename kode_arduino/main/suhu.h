#include "HardwareSerial.h"
#include <OneWire.h>
#include <DallasTemperature.h>

const int pinSensor = 2;  // Pin data sensor DS18B20

OneWire oneWire(pinSensor);
DallasTemperature sensors(&oneWire);

void setupSuhu() {
  sensors.begin();
}

void suhu() {
  sensors.requestTemperatures();  // Meminta suhu dari sensor

  float suhuCelsius = sensors.getTempCByIndex(0);  // Mendapatkan nilai suhu dalam derajat Celsius

  Serial.print("Suhu: ");
  Serial.print(suhuCelsius);
  Serial.print("©");

  if (suhuCelsius > 30) {
    Serial.println("Suhu lebih dari 30 derajat Celsius");
  }
  if (suhuCelsius < 20) {
    Serial.println("Suhu kurang dari 20 derajat Celsius");
  }

  if (20 > suhuCelsius < 30) {
    Serial.println("suhu dalam rentang normal");
  }
}