#include <DHT.h>
#include <SoftwareSerial.h>

#define DHTPIN 2 // Chọn chân kết nối cảm biến DHT
#define DHTTYPE DHT11 // Loại cảm biến DHT (DHT11, DHT22, AM2302)

SoftwareSerial esp8266(2, 3); // Chọn chân RX và TX cho giao tiếp UART với ESP8266

DHT dht(DHTPIN, DHTTYPE); // Khởi tạo cảm biến DHT

void setup() {
  Serial.begin(115200); // Khởi tạo baudrate cho giao tiếp nối tiếp
  esp8266.begin(115200); // Khởi tạo baudrate cho giao tiếp UART với ESP8266
  dht.begin(); // Khởi tạo cảm biến DHT
}

void loop() {
  // Đọc dữ liệu nhiệt độ và độ ẩm
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Kiểm tra xem có lỗi hay không
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Lỗi khi đọc dữ liệu!");
    return;
  }

  // Gửi dữ liệu qua UART sang ESP8266
  esp8266.print("Nhiệt độ: ");
  esp8266.print(temperature);
  esp8266.print("°C");
  esp8266.print(" Độ ẩm: ");
  esp8266.print(humidity);
  esp8266.println("%");

  // In dữ liệu lên Serial monitor
  Serial.print("Nhiệt độ: ");
  Serial.print(temperature);
  Serial.print("°C");
  Serial.print(" Độ ẩm: ");
  Serial.print(humidity);
  Serial.println("%");

  delay(1000); // Chờ 2 giây trước khi đọc dữ liệu tiếp theo
}
