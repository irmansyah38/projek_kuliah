#include "fungsi.h"
#include "suhu.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  setupSuhu();

}

void loop() {
  // put your main code here, to run repeatedly:
  suhu();
}
