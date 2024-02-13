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
  Serial.println(" derajat Celsius");

  if (suhuCelsius > 30) {
  Serial.begin("suhu lebih 30")
  }
  if (suhuCelsius < 20) {
    Serial.begin("suhu kurang dari 20")
  }
}
