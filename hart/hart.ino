#include <SlepleOWT.h>
#include <LiquidCrystal.h>
#define DHTPIN 7
#define DHTTYPE DHT11
#define LCD_resolution 6
SimpleDHT11 dht11(DHTPIN);
LiquidCrystal lcd(13,12,5,4,3,2);
byte heart [8] = {
  B00000,
  B01010,
  B10101,
  B10001,
  B01010,
  B00100,
  B00000
};

void setup() {
  lcd.begin(16,2);
  analogWrite(LCD_resolution,100);
  lcd.clear();
  lcd.createChar(0,heart);

  lcd.setCursor(0,0);
  lcd.write(byte(0));

  lcd.setCursor(4,0);
  lcd.write(byte(1));
  lcd.write(byte(2));
}
