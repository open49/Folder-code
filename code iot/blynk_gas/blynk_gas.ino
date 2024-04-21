
#define BLYNK_TEMPLATE_ID "TMPL63EVqwJBy"
#define BLYNK_TEMPLATE_NAME "gas"
#define BLYNK_AUTH_TOKEN "qbz5DnN5D3qUwamZQuGcFt1UJ6uBKXXu"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"
#define BLYNK_PRINT Serial
#define APP_DEBUG

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Khai báo thông tin kết nối WiFi
char ssid[] = "tuanNA";
char pass[] = "88888888";
char auth[] = "qbz5DnN5D3qUwamZQuGcFt1UJ6uBKXXu";
const int gas = A0;
void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pass);
  delay(100);
}

void loop() {
  int gas1 = analogRead(gas);
  Blynk.virtualWrite(V0,gas1);

  // In giá trị ra màn hình
  Serial.print("Giá trị cảm biến gas: ");
  Serial.println(gas1);

  delay(1000); // Đợi 1 giây trước khi đọc giá trị tiếp theo
}

