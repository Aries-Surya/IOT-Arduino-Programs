#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("MSME");
  delay(2000); lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Chennai");
  delay(2000); lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Guindy");
  delay(2000); lcd.clear();
}
