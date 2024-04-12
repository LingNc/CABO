#include"Card.h"
//初始化构造函数
Card::Card(int x):
    is_front(false),
    num(x){
    if(x<=4||x==13) data="NULL";
    else if(x<=6)   data="FLIP";
    else if(x<=8)   data="PEEK";
    else if(x<=10)  data="SPY" ;
    else if(x<=12)  data="SWAP";
}