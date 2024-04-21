// Define chân analog mà cảm biến mưa được kết nối
const int pinMua = A0;

void setup() {
  Serial.begin(9600); // Mở cổng Serial để in giá trị cảm biến ra màn hình
}

void loop() {
  // Đọc giá trị từ cảm biến mưa
  int giaTriMua = analogRead(pinMua);

  // In giá trị ra màn hình
  Serial.print("Giá trị cảm biến mưa: ");
  Serial.println(giaTriMua);

  delay(1000); // Đợi 1 giây trước khi đọc giá trị tiếp theo
}
