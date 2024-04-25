// Khai báo chân analog cho hai cảm biến LDR
const int ldrPin1 = A0;
const int ldrPin2 = A1;

void setup() {
  Serial.begin(9600); // Bắt đầu kết nối với Serial Monitor
}

void loop() {
  // Đọc giá trị từ cảm biến 1
  int sensorValue1 = analogRead(ldrPin1);
  // Đọc giá trị từ cảm biến 2
  int sensorValue2 = analogRead(ldrPin2);

  // In giá trị đo được lên Serial Monitor
  Serial.print("Sensor 1 Value: ");
  Serial.println((1023 - sensorValue1)*10);
  Serial.print("Sensor 2 Value: ");
  Serial.println((1023 - sensorValue2)*10);

  // Đợi một khoảng thời gian trước khi đọc lại giá trị
  delay(1000); // Đợi 1 giây trước khi đọc lại giá trị
}
