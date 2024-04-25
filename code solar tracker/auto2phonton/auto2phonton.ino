// Bao gồm thư viện servo motor
#include <Servo.h>
// Xác định các chân cảm biến LDR
#define LDR1 A0
#define LDR2 A1
// Xác định giá trị sai số. Bạn có thể thay đổi nó theo ý muốn
#define sai_so 10
// Điểm bắt đầu của servo motor
int diem_bat_dau =  90;
// Tạo một đối tượng cho servo motor
Servo servo;

void setup() {
  // Bao gồm chân PWM của servo motor
  servo.attach(2);
  // Đặt điểm bắt đầu của servo
  servo.write(diem_bat_dau);
  delay(1000);
}

void loop() {
  // Lấy giá trị cảm biến LDR
  int ldr1 = analogRead(LDR1);
  // Lấy giá trị cảm biến LDR
  int ldr2 = analogRead(LDR2);

  // Lấy hiệu của các giá trị này
  int gia_tri1 = abs(ldr1 - ldr2);
  int gia_tri2 = abs(ldr2 - ldr1);

  // Kiểm tra các giá trị này bằng điều kiện IF
  if ((gia_tri1 <= sai_so) || (gia_tri2 <= sai_so)) {

  } else {
    if (ldr1 > ldr2) {
      diem_bat_dau = --diem_bat_dau;
    }
    if (ldr1 < ldr2) {
      diem_bat_dau = ++diem_bat_dau;
    }
  }
  // Viết các giá trị lên servo motor
  servo.write(diem_bat_dau);
  delay(80);
}
