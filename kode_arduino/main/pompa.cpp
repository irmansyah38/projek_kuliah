// pompa.cpp
#include "Arduino.h"  // Sertakan file header Arduino.h
#include "pompa.h"

void setupPompa(int pin) {
  // Atur pin sebagai OUTPUT
  pinMode(pin, OUTPUT);
}

void pompa(int pin) {
  // Aktifkan pompa selama 5 detik
  digitalWrite(pin, HIGH);
  delay(5000);  // Delay 5000 milidetik (5 detik)

  // Matikan pompa selama 5 detik
  digitalWrite(pin, LOW);
  delay(5000);  // Delay 5000 milidetik (5 detik)
}
