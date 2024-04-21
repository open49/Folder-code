/*
#define GAS_SENSOR_PIN A0  // Chân analog nơi cắm cảm biến gas MQ-2

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Đọc giá trị từ cảm biến gas MQ-2
  int gasValue = analogRead(GAS_SENSOR_PIN);

  // In giá trị ra Serial Monitor
  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  delay(1000);  // Đợi 1 giây trước khi đọc lại dữ liệu
}
*/
/************************************************************************************************************/

#define SOIL_MOISTURE_SENSOR_PIN A0  // Chân analog nơi cắm cảm biến độ ẩm đất

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Đọc giá trị từ cảm biến độ ẩm đất
  int soilMoistureValue = analogRead(SOIL_MOISTURE_SENSOR_PIN);

  // In giá trị ra Serial Monitor
  Serial.print("Soil Moisture Value: ");
  Serial.println(soilMoistureValue);

  delay(1000);  // Đợi 1 giây trước khi đọc lại dữ liệu
}

/************************************************************************************************************/
/*
#include <DHT.h>

#define DHT_PIN 2       // Chân digital nơi cắm cảm biến DHT11
#define DHT_TYPE DHT11   // Loại cảm biến (DHT11 hoặc DHT22)

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // Đọc dữ liệu từ cảm biến DHT11
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // In giá trị ra Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C, Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(2000);  // Đợi 2 giây trước khi đọc lại dữ liệu
}
*/
/************************************************************************************************************/
/*
#define RELAY_PIN D0  // Chân digital nơi cắm relay

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Bật relay (motor chạy)
  digitalWrite(RELAY_PIN, HIGH);
  Serial.println("Motor ON");

  delay(5000);  // Motor chạy trong 5 giây

  // Tắt relay (motor dừng)
  digitalWrite(RELAY_PIN, LOW);
  Serial.println("Motor OFF");

  delay(5000);  // Nghỉ 5 giây trước khi bắt đầu lại
}
*/
/************************************************************************************************************/
/*
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
  int value = analogRead(sensorValue);
  Blynk.virtualWrite(V0,value);
  Blynk.run();

  // In giá trị ra màn hình
  Serial.print("Giá trị cảm biến : ");
  Serial.println(value);

  delay(1000); // Đợi 1 giây trước khi đọc giá trị tiếp theo
}
*/