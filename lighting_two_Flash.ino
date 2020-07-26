void setup(){
  pinMode(12,OUTPUT);  //设置数字IO口的模式，OUTPUT为输出
  pinMode(11,OUTPUT); 
}

void loop(){
  digitalWrite(12,HIGH); //设定pin12为HIGH = 5v左右
  digitalWrite(11,LOW);  //设定pin11位LOW = 0v左右
  delay(1000);           //设定延时时间，1000ms = 1s
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(1000); 
}
