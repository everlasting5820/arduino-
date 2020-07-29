#include<IRremote.h>   //引入函数库

IRrecv irrecv(6);     //将红外线脚位设定为6
decode_results results;//接受到红外线讯号值

void setup()
{
  Serial.begin(9600);   //启用序列号

  Serial.println("Enabling IRin");  //打印出启动
  irrecv.enableIRIn();              //启用红外线接受
  Serial.println("Enable IRin");    //打印出启动红外线完成
  pinMode(7,OUTPUT);
}

void loop(){
  if(irrecv.decode(&results)){//如果接受到红外线
    if(results.value==18186699);
    {
      digitalWrite(7,!digitalRead(7));
    }
    //Serial.println(results.value,HEX);  //打印出接受到的值
    irrecv.resume();                    //让接受器可以再接受
  }
  delay(100);
}
