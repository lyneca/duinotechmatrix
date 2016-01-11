#include "bitmaps.h"
/*
Pin maps:
 VCC goes to 5V
 GND goes to Ground
 DIN goes to pin 10
  CS goes to pin 8
 CLK goes to pin 9

Usage: LedControl(DIN, CLK, CS, 1)
*/
LedControl lc = LedControl(10, 9, 8, 1);
void setup() {
  // put your setup code here, to run once:
  lc.shutdown(0, false);
  lc.setIntensity(0, 8);
  lc.clearDisplay(0);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void writeGrid(byte grid[8]) {
  Serial.println("Writing leds");
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, grid[i]);
  }
}
