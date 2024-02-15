#include <WiFi.h>
const char *ssid = "NamaWiFi";
const char *password = "KataSandiWiFi";

void wifi() {
  Serial.begin(115200);

  // Menghubungkan ke WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Menghubungkan ke WiFi...");
  }

  Serial.println("Terhubung ke WiFi!");
}
