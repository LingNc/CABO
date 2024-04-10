#include"Card.h"
//初始化构造函数
Card::Card(int x){
    if(x<=4||x==13) _data="NULL";
    else if(x<=6)   _data="FLIP";
    else if(x<=8)   _data="PEEK";
    else if(x<=10)  _data="SPY" ;
    else if(x<=12)  _data="SWAP";
    _is_front=-1;
}
//发动该牌技能
int Card::skill(Player &who){
    int res=-1;
    if(_data=="FLIP")
        flip(who);
    else if(_data=="PEEK")
        res=peek();
    else if(_data=="SPY")
        res=spy(who);
    else if(_data=="SWAP")
        swap(who);
    return res;
}
//返回牌面技能
std::string Card::data(){
    return _data;
}

int Card::num(){
    return card_num;
}
//返回牌的状态
bool Card::is_front(){
    return _is_front;
}
//反转牌
void Card::turn(){
    _is_front=(_is_front)?false:true;
}