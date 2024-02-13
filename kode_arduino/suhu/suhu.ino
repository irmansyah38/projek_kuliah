#include <OneWire.h>
#include <DallasTemperature.h>

const int pinSensor = 2;  // Pin data sensor DS18B20

OneWire oneWire(pinSensor);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  sensors.begin();
}

void loop() {
  sensors.requestTemperatures();  // Meminta suhu dari sensor

  float suhuCelsius = sensors.getTempCByIndex(0);  // Mendapatkan nilai suhu dalam derajat Celsius

  Serial.print("Suhu: ");
  Serial.print(suhuCelsius);
  Serial.println(" derajat Celsius");

  delay(1000);
}
