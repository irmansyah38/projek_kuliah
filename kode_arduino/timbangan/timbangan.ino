#include "HX711.h"

#define DOUT_PIN 2   // Hubungkan pin DOUT HX711 ke pin 2 Arduino
#define CLK_PIN 3    // Hubungkan pin CLK HX711 ke pin 3 Arduino

HX711 scale;

void setupTimbangan() {
  scale.begin(DOUT_PIN, CLK_PIN);
}

void timbangan() {
  if (scale.is_ready()) {
    long reading = scale.get_units();  // Mendapatkan nilai bacaan dari load cell
    Serial.print("Bacaan: ");
    Serial.print(reading);
    Serial.println(" gram");
    delay(1000);  // Delay 1 detik
    return reading;
  } else {
    Serial.println("Error: HX711 tidak siap. Pastikan koneksi benar!");
  }
}
