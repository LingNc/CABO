#include"Card.h"
//初始化构造函数
Card::Card(int x):is_front(false),num(x){
    if((x<=4&&x>=0)||x==13) data="NULL";
    else if(x<=6)   data="FLIP";
    else if(x<=8)   data="PEEK";
    else if(x<=10)  data="SPY";
    else if(x<=12)  data="SWAP";
    //错误牌
    if(x==-1){
        data="ERROR";
        num=-1;
    }
}
//拷贝构造函数
Card::Card(Card &other){
    data=other.data;
    num=other.num;
    is_front=other.is_front;
}