// Đối với cảm biến MQ-2, MQ-7 hoặc cảm biến khí gas sử dụng giao tiếp analog
const int gasSensorPin = A0; // Chân nối với cảm biến khí gas (sử dụng chân analog)

void setup() {
  Serial.begin(115200);
}

void loop() {
  // Đọc giá trị từ cảm biến khí gas
  int gasValue = analogRead(gasSensorPin);

  // In giá trị đọc được ra Serial Monitor
  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  // Tùy thuộc vào loại cảm biến, bạn có thể cần xử lý giá trị đọc được để chuyển đổi thành các đơn vị thích hợp.
  // Đồng thời, bạn cũng có thể cần thực hiện calibrations dựa trên hướng dẫn của nhà sản xuất.

  delay(1000); // Đợi 1 giây trước khi đọc lại dữ liệu
}
