#include <ESP8266WiFi.h>

const char* ssid = "TuanNA"; // Tên mạng WiFi
const char* password = "88888888"; // Mật khẩu WiFi

void setup() {
  Serial.begin(115200); // Khởi tạo baudrate cho giao tiếp nối tiếp

  // Kết nối WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("Đã kết nối WiFi!");

  // Đọc dữ liệu từ ESP8266 qua UART
  while (true) {
    if (Serial.available()) {
      String data = Serial.readStringUntil('\n');
      Serial.println(data); // In dữ liệu lên Serial monitor
    }
  }
}

void loop() {
  // Chưa sử dụng trong code này
}
