#include "fungsi.h"
#include "suhu.h"
#include "load_cell.h"
#include "wifi.h"
#include "ph.h"
#include "pompa.h"
#include "kekeruhan.h"

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  setupSuhu();
  setupLoadCell(1, 2);
  setupLoadCell(3, 4);
  setupPH();
  setupPompa(7);
  setupPompa(8);
  wifi();
}

void loop()
{
  // put your main code here, to run repeatedly:
  suhu();
  PH();
  kekeruhan();
}
