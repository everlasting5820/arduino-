
int line[6]={0,1,2,3,4,5};  //line的六个脚位
int col[6]={8,9,10,11,12,13}; //col的六个脚位

int appear[6][6]={{0,0,0,0,0,0},
                  {0,0,0,0,0,0},
                  {0,0,0,0,0,0},
                  {0,0,0,0,0,0},
                  {0,0,0,0,0,0},
                  {0,0,0,0,0,0}};

void setup(){
  for(int i=0;i<6;i++){
    pinMode(line[i],OUTPUT);
    pinMode(col[i],OUTPUT);
    digitalWrite(line[i],LOW);
    digitalWrite(col[i],HIGH);
  }
}
void loop(){
  for(int i=0;i<6;i++){
     for(int j=0;j<6;j++){      //每一个line跑一次
        if(appear[i][j]==1){     //每一个col跑一次
          digitalWrite(line[i],HIGH);//如果要显示的资料处有1的话，就是让这个灯亮
          digitalWrite(col[j],LOW); 
          delay(1);
          digitalWrite(line[i],LOW);
          digitalWrite(col[j],HIGH);
          }
      }
  }
}

/*void loop(){
  digitalWrite(line[3],LOW);
    digitalWrite(col[0],HIGH);
  
}*/
