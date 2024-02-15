// Mendefinisikan pin Arduino yang terhubung ke modul relay
const int pinRelay = 7;  // Ganti dengan pin yang sesuai

void setup() {
  // Mengatur pin relay sebagai OUTPUT
  pinMode(pinRelay, OUTPUT);
  
  // Mematikan pompa saat inisialisasi
  digitalWrite(pinRelay, LOW);
}

void loop() {
  // Menghidupkan pompa selama 5 detik
  digitalWrite(pinRelay, HIGH);
  delay(5000);  // Waktu pompa aktif (5 detik)

  // Mematikan pompa selama 5 detik
  digitalWrite(pinRelay, LOW);
  delay(5000);  // Waktu pompa non-aktif (5 detik)
}
