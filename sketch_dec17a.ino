#include <SimpleDHT.h>
#include <LiquidCrystal.h>

#define DHTPIN  7
#define DHTTYPE DHT11
#define LCD_resolution  6
SimpleDHT11 dht11(DHTPIN);
LiquidCrystal lcd(13,12,5,4,3,2);

void setup() {
  lcd.begin(16,2);
  analogWrite(LCD_resolution,100);
  lcd.clear();
}

void loop() {
  byte t = 0;
  byte h = 0;
  dht11.read(&t,&h,NULL);

  lcd.setCursor(0,0);
  lcd.print("T:");
  lcd.print(t);
  lcd.print(" C");
  lcd.setCursor(9,0);
  lcd.print("H:");
  lcd.print(h);
  lcd.print(" %");

  delay(2000);
}
