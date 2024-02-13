// Pin yang digunakan untuk sensor pH
const int analogPin = A0;

void setup() {
  // Inisialisasi Serial Monitor
  Serial.begin(9600);
  Serial.println("pH Sensor Reading:");
}

void loop() {
  // Membaca nilai analog dari sensor pH
  int sensorValue = analogRead(analogPin);

  // Mengonversi nilai analog menjadi nilai pH
  float pHValue = map(sensorValue, 0, 1023, 0, 14);

  // Menampilkan nilai pH ke Serial Monitor
  Serial.print("Nilai pH: ");
  Serial.println(pHValue);

  // Tunda beberapa detik sebelum membaca kembali
  delay(1000);
}
