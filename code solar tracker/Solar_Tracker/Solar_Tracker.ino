#include <Servo.h> // bao gồm thư viện servo

Servo myservo;

#define ldr1 A0 // đặt pin đầu vào Analog của ldr 1 ở phía Đông là một số nguyên
#define ldr2 A1 // đặt pin đầu vào Analog của ldr 2 ở phía Tây là một số nguyên

int pos = 90; // vị trí ban đầu của servo điều khiển chuyển động ngang
int tolerance = 10; // thiết lập sai số cho phép - để servo mô tơ mặt trời không luôn luôn chuyển động
   
void setup(){
  myservo.attach(2); // gắn servo trên chân số 2 để điều khiển chuyển động ngang của servo
  pinMode(ldr1, INPUT); // đặt chân ldr 1 phía Đông là đầu vào
  pinMode(ldr2, INPUT); // đặt chân ldr 2 phía Tây là đầu vào
  myservo.write(pos); // viết vị trí bắt đầu của servo điều khiển chuyển động ngang
  Serial.begin(9600);
  delay(1000); // đợi 1 giây để cho tấm pin mặt trời di chuyển đến vị trí bắt đầu trước khi bắt đầu theo dõi mặt trời
}

void loop(){      
  int val1 = analogRead(ldr1); // đọc giá trị của ldr 1
  int val2 = analogRead(ldr2); // đọc giá trị của ldr 2
  
  Serial.print("Giá trị LDR1: ");
  Serial.print(ldr1); // In giá trị của cảm biến LDR1
  Serial.print(", Giá trị LDR2: ");
  Serial.println(ldr2); // In giá trị của cảm biến LDR2
      
  if((abs(val1 - val2) <= tolerance) || (abs(val2 - val1) <= tolerance)) {
    // không có chuyển động ngang servo nếu giá trị ldr nằm trong sai số cho phép
  } else {
    if(val1 > val2) // nếu ldr1 phát hiện ánh sáng nhiều hơn ldr2 
    {
      pos = pos + 1; // giảm vị trí 90 độ của servo ngang - điều này sẽ di chuyển vị trí Bắc
    }
    if(val1 < val2) // nếu ldr2 phát hiện ánh sáng nhiều hơn ldr1
    {
      pos = pos - 1; // tăng vị trí 90 độ của mô tơ ngang - điều này sẽ di chuyển vị trí Nam
    }
  }
     
  if(pos > 180) {pos = 180;} // đặt lại vị trí ngang của mô tơ về 180 nếu nó cố gắng di chuyển qua điểm này
  if(pos < 0) {pos = 0;} // đặt lại vị trí ngang của mô tơ về 0 nếu nó cố gắng di chuyển qua điểm này
  myservo.write(pos); // viết vị trí bắt đầu cho mô tơ ngang
  delay(50);


}
