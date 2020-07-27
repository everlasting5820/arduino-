/*
  这次的操作要学习
    ——可变电阻（电位器）的类比讯号输入
    ——之后用可变电阻来控制LED的亮度
 */

int sensor = A0;  //设定sensor这个参数就是指A0的意思
int sensorRead = 0;   //先设定sensor读到的数为0
int newdata = 0;  //变化后的数值

void setup(){
  Serial.begin(9600); //开放序列号
}

void loop(){
  sensorRead = analogRead(sensor); //由A0的接脚读取类比讯号
   newdata = map(sensorRead,0,1023,0,255);
  Serial.println( newdata /*sensorRead*/ );  //将读到的数值传到序列号
  analogWrite(3,newdata);
  delay(200);
}
