
#define BLYNK_TEMPLATE_ID "TMPL6jyzgyu2U"
#define BLYNK_TEMPLATE_NAME "TuanIOT"
#define BLYNK_AUTH_TOKEN "YKhaKTA9YfCVhiCJtRcBu4HW7SgN90e_"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "tuanNA";
char pass[] = "88888888";
char auth[] = "YKhaKTA9YfCVhiCJtRcBu4HW7SgN90e_";

const int sensorValue = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pass);
  delay(2000);

}

void loop() {
  // put your main code here, to run repeatedly:
  int nuoc = analogRead(sensorValue);
  Blynk.virtualWrite(V0,nuoc);
  Blynk.run();

  // In giá trị ra màn hình
  Serial.print("Giá trị cảm biến : ");
  Serial.println(nuoc);

  delay(1000); // Đợi 1 giây trước khi đọc giá trị tiếp theo

}
