int apin=8;  //橙色
int bpin=9;  //黄色
int cpin=10; //粉红色
int dpin=11; //蓝色
int delaytime=10; //转动时间间距

void setup(){
  pinMode(apin,OUTPUT);
  pinMode(cpin,OUTPUT);
  pinMode(bpin,OUTPUT);
  pinMode(dpin,OUTPUT);
}

void loop(){
  digitalWrite(apin,HIGH);
  delay(delaytime);
  
  digitalWrite(apin,LOW);
  digitalWrite(bpin,HIGH);
  delay(delaytime);

  digitalWrite(bpin,LOW);
  digitalWrite(cpin,HIGH);
  delay(delaytime);

  digitalWrite(cpin,LOW);
  digitalWrite(dpin,HIGH);
  delay(delaytime);

  
}
