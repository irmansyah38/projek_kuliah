#include "HardwareSerial.h"
#include "load_cell.h"
#include "pompa.h"
// Pin yang digunakan untuk sensor pH

const int analogPin = A0;

void setupPH() {
  // Inisialisasi Serial Monitor
  Serial.begin(9600);
}

void PH() {
  // Membaca nilai analog dari sensor pH
  int sensorValue = analogRead(analogPin);

  // Mengonversi nilai analog menjadi nilai pH
  float pHValue = map(sensorValue, 0, 1023, 0, 14);

  // Menampilkan nilai pH ke Serial Monitor
  Serial.print("Nilai pH: ");
  Serial.println(pHValue);

  // jika ph lebih dari 8
  if (pHValue > 8) {

    float cairanAsam = loadCell(1,2);
    if (cairanAsam < 50) {
      Serial.println("cairan asam sudah mau abis segera diisi");
    }
    //jalankan pompa
    pompa(7); 
  }
  
  // jika kurang dari 6
  if (pHValue < 6) {
    float cairanBasa = loadCell(3,4);
    if (cairanBasa < 50) {
      Serial.println("cairan asam sudah mau abis segera diisi");
    }
     //jalankan pompa
    pompa(8); 
  }

  // Tunda beberapa detik sebelum membaca kembali
  delay(1000);
}