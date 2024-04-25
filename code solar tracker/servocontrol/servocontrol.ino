#include <Servo.h>

Servo servo;

int pos = 0;    // Góc hiện tại của servo

void setup() {
  servo.attach(9);  // Chọn chân PWM để kết nối servo
}

void loop() {
  // Quay servo từ 0 đến 180 độ
  for (pos = 0; pos <= 180; pos += 1) {
    servo.write(pos);
    delay(15);  // Đợi một lát cho servo di chuyển
  }
  
}
  // Quay servo
