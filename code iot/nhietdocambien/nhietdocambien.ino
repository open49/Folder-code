#include "DHT.h"
#define DHT11PIN D0
#define DHTType DHT11
DHT HT(DHT11PIN , DHTType);
float doam;
float nhietdoc;
float nhietdof;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin();
  delay(1000);


}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  doam = HT.readHumidity();
  nhietdoc = HT.readTemperature();
  nhietdof = HT.readTemperature(true);// them chu true la doc do f

  Serial.print("do am : ");
  Serial.print(doam);
  Serial.print("%");
  Serial.print("do c : ");
  Serial.print(nhietdoc);
  Serial.print("do f : ");
  Serial.print(nhietdof);



}
