#include <LiquidCrystal.h>
#include "DHT.h"

int temperature;
int humidity;
int dhtpin=4;
int rs=12,enable=11,d4=10,d5=9,d6=8,d7=7;
#define dhttype DHT11

LiquidCrystal lcd(rs,enable,d4,d5,d6,d7);
DHT dht(dhtpin,dhttype);

void setup() {
  lcd.begin(16,2);
  dht.begin();


}

void loop() {
  temperature=dht.readTemperature();
  humidity=dht.readHumidity();
  lcd.clear();

  if(isnan(humidity)||isnan(temperature)){
    lcd.print("fetch error");
  }else{
    lcd.print("Temperature: ");
    lcd.print(temperature);
    lcd.setCursor(0,1);
    lcd.print("Humidity: ");
    lcd.print(humidity);
    lcd.print("%");
  }
delay(2000);
}
