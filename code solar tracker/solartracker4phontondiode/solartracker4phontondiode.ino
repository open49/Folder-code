#include <LiquidCrystal_I2C.h>
#include <Servo.h>


//LDRs - Khai báo cảm biến ánh sáng

const int LDR_TOP_LEFT = A0;
const int LDR_TOP_RIGHT = A1;
const int LDR_BOTTOM_LEFT = A2;
const int LDR_BOTTOM_RIGHT = A3;
const int LIGHT_THRESHOLD = 10;// Ngưỡng ánh sáng để quyết định hướng

//Servos - Khai báo Servo

Servo servo_horizontal;
Servo servo_vertical;
int pos_sh = 90; // Vị trí ban đầu của Servo ngang
int pos_sv = 90; // Vị trí ban đầu của Servo đứng
const int UPPER_LIMIT_POS = 160;   // Giới hạn trên của Servo
const int LOWER_LIMIT_POS = 20;    // Giới hạn dưới của Servo 

// Cảm biến dòng điện
const int CURRENT_SENSOR = A6;
const float SENSIBILITY = 0.185;
const int CURRENT_SAMPLES = 10;

unsigned long lastTime = 0;
unsigned long threshold = 2000;

//Pantalla LCD con I2C
// LiquidCrystal_I2C lcd(0x27, 16, 2);  


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(500);
  // lcd.init();
  // delay(2000);
  // lcd.backlight();
  servo_vertical.attach(5);
  servo_horizontal.attach(6);
  servo_vertical.write(90);
  servo_horizontal.write(90);
  pos_sv = servo_vertical.read();
  pos_sh = servo_horizontal.read();
}

void loop() {
  // Đọc giá trị từ các cảm biến ánh sáng
  int ldr_tl_value = analogRead(LDR_TOP_LEFT);
  int ldr_tr_value = analogRead(LDR_TOP_RIGHT);
  int ldr_bl_value = analogRead(LDR_BOTTOM_LEFT);
  int ldr_br_value = analogRead(LDR_BOTTOM_RIGHT);
  
  // Tính trung bình của các cảm biến
  int average_top = (ldr_tl_value + ldr_tr_value) / 2; 
  int average_bottom = (ldr_bl_value + ldr_br_value) / 2; 
  int average_left = (ldr_tl_value + ldr_bl_value) / 2; 
  int average_right = (ldr_tr_value + ldr_br_value) / 2; 

  // Điều khiển Solar Tracker
  moveSolarTracker(average_top, average_bottom, average_left, average_right);

  // Kiểm tra và hiển thị dòng điện đo được
  if ((millis() - lastTime) > threshold) {
    lastTime = millis();

    float current_measured = medirCorriente(CURRENT_SENSOR, SENSIBILITY, CURRENT_SAMPLES);
   
    // lcd.clear();
    // lcd.setCursor(2, 0);
    // lcd.print("Corriente:");
    // lcd.setCursor(2, 1);
    Serial.print(current_measured);
    // Serial.print(String(current_measured));
    Serial.print(current_measured);
    Serial.println("A");
  }


  delay(30);
}
// Hàm điều khiển Solar Tracker

void moveSolarTracker(int average_top, int average_bottom, int average_left, int average_right) {
  if ((average_top - average_bottom) > LIGHT_THRESHOLD && pos_sv < UPPER_LIMIT_POS) {
    pos_sv++;
    servo_vertical.write(pos_sv);
  }
  else if ((average_bottom - average_top) > LIGHT_THRESHOLD && pos_sv > LOWER_LIMIT_POS) {
    pos_sv--;
    servo_vertical.write(pos_sv);
  }

  if ((average_left - average_right) > LIGHT_THRESHOLD && pos_sh < UPPER_LIMIT_POS) {
    pos_sh++;
    servo_horizontal.write(pos_sh);
  }
  else if ((average_right - average_left) > LIGHT_THRESHOLD && pos_sh > LOWER_LIMIT_POS) {
    pos_sh--;
    servo_horizontal.write(pos_sh);
  }
}
// Hàm đo dòng điện

float medirCorriente(int current_sensor, float sensibility, int samples) {
  float sensor_read = 0;
  float current_measured = 0;
  
  // Đọc giá trị từ cảm biến và tính trung bình

  for (int i = 0; i < samples; i++) {
    sensor_read += analogRead(CURRENT_SENSOR);
  }

  sensor_read = sensor_read / samples;

  // Chuyển đổi giá trị ADC sang điện áp
  sensor_read = sensor_read * (5.0 / 1023.0);

  // Tính toán dòng điện
  current_measured = (sensor_read - 2.5) / sensibility;
  Serial.println(sensor_read); // Hiển thị giá trị ADC trên Serial Monitor

  return current_measured;
}