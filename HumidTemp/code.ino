#include "DHT.h"

#define dhttype DHT22

int dhtpin=10;

DHT dht(dhtpin,dhttype);

void setup() {
Serial.begin(115200);
dht.begin();

}

void loop() {

int temperature=dht.readTemperature();
int humidity=dht.readHumidity();
if(isnan(temperature) || isnan(humidity)){
  Serial.println("failed to fetch Data From Sensor");
  return;
}

Serial.print("Humidity: ");
Serial.print(humidity);
Serial.print("%\t");
Serial.print("Temperature: ");
Serial.print(temperature);
Serial.print("°C\n");
delay(2000);
}
