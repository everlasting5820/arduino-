
#include <Servo.h>  //想使用伺服电机，一定要先加这行，就是导入函数库的意思

Servo myservo;  // 先定义这个马达的名字
int sensor = 0; //电位器输入的类比讯号值
int angle = 0;

void setup() {
  myservo.attach(9);  // 宣告次马达的讯号控制脚位是9号脚位
}

void loop() {
  sensor = analogRead(A0); //从A0读取到类比讯号
  angle = map(sensor,0,1023,0,180);
  myservo.write(angle);  //马达转到N度角位置 （0-180）
  //delay(15);    
}
