int big = 2;
int push = 3;
int datain = 4;
int datainput[8]={1,0,1,0,1,0,1,0};

void setup(){
  pinMode(big,OUTPUT);  //将大平台定义为引脚位2（就是ST）
  pinMode(push,OUTPUT); //将活塞定义为引脚位3（就是SH）
  pinMode(datain,OUTPUT);  //将讯号输入定义为引脚位4（就是DS）
}

void loop(){
  digitalWrite(big,LOW);  //先放下平台

  for(int i=0;i<8;i++){
   putsomething(datainput[i]); 
  }
  /* putsomething(1);
  putsomething(0);
  putsomething(1);
  putsomething(0);
  putsomething(1);
  putsomething(0);
  putsomething(1);
  putsomething(0);
  putsomething(1);
  putsomething(0);
  */
  digitalWrite(big,HIGH);  //上升平台
}
void putsomething(int number){
  digitalWrite(push,LOW);
  digitalWrite(datain,number);
  digitalWrite(push,HIGH);

}
  
 /*
  void loop(){
  digitalWrite(big,LOW);  //先放下平台
  
  digitalWrite(push,LOW);  //拉回活塞，等讯号放上去
  digitalWrite(datain,1);  //资料放上
  digitalWrite(push,HIGH);  //放好讯号，推出去

  putone();
  digitalWrite(push,LOW);
  digitalWrite(datain,1);
  digitalWrite(push,HIGH);

  digitalWrite(push,LOW);
  digitalWrite(datain,1);
  digitalWrite(push,HIGH);

  digitalWrite(push,LOW);
  digitalWrite(datain,1);
  digitalWrite(push,HIGH);

  digitalWrite(push,LOW);
  digitalWrite(datain,1);
  digitalWrite(push,HIGH);

  digitalWrite(push,LOW);
  digitalWrite(datain,1);
  digitalWrite(push,HIGH);

  digitalWrite(push,LOW);
  digitalWrite(datain,1);
  digitalWrite(push,HIGH);

  digitalWrite(push,LOW);
  digitalWrite(datain,1);
  digitalWrite(push,HIGH);

  digitalWrite(big,HIGH);  //推上平台
  
}

void putone(){
  digitalWrite(push,LOW);
  digitalWrite(datain,1);
  digitalWrite(push,HIGH);
}

void putzero(){
  digitalWrite(push,LOW);
  digitalWrite(datain,0);
  digitalWrite(push,HIGH);
}
*/
