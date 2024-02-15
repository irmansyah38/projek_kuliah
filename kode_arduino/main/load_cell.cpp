// load_cell.cpp
#include "load_cell.h"
#include "HX711.h"

HX711 scale1;
HX711 scale2;

void setupLoadCell(int DOUT_PIN, int CLK_PIN) {
  if (DOUT_PIN == 1) {
    scale1.begin(DOUT_PIN, CLK_PIN);
  }
  if (DOUT_PIN == 3) {
    scale2.begin(DOUT_PIN, CLK_PIN);
  }
}

float loadCell(int DOUT_PIN, int CLK_PIN) {
  if (DOUT_PIN == 1) {
    if (scale1.is_ready()) {
      return scale1.get_units();
    } 
    else {
      Serial.println("Error: HX711 tidak siap. Pastikan koneksi benar!");
      // Mungkin tambahkan logika penanganan kesalahan tambahan jika diperlukan
      return 0.0;  // Atau nilai default lainnya
    }
  }

  if (DOUT_PIN == 3) {
    if (scale2.is_ready()) {
      return scale2.get_units();
    } 
    else {
      Serial.println("Error: HX711 tidak siap. Pastikan koneksi benar!");
      // Mungkin tambahkan logika penanganan kesalahan tambahan jika diperlukan
      return 0.0;  // Atau nilai default lainnya
    }
  }

  // Mungkin tambahkan logika penanganan kesalahan tambahan jika DOUT_PIN tidak sesuai
  Serial.println("Error: DOUT_PIN tidak valid!");
  return 0.0;  // Atau nilai default lainnya
}
