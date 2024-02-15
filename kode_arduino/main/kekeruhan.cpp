const int kekeruhanPin = A1; // Pin analog untuk sensor kekeruhan


void kekeruhan() {
  int kekeruhanValue = analogRead(kekeruhanPin); // Membaca nilai kekeruhan dari sensor

  // Menampilkan nilai kekeruhan di monitor serial
  Serial.print("Nilai Kekeruhan: ");
  Serial.println(kekeruhanValue);

  // Menggunakan nilai kekeruhan untuk mengambil keputusan atau mengirimkan data ke tempat lain
  // Misalnya, jika nilai kekeruhan melebihi ambang tertentu, Anda dapat mengambil tindakan tertentu.

  delay(1000); // Menunda selama 1 detik sebelum membaca nilai kekeruhan lagi
}
