#include"Card.h"
//初始化构造函数
Card::Card(int x):
    _is_front(-1),
    card_num(x){
    if(x<=4||x==13) _data="NULL";
    else if(x<=6)   _data="FLIP";
    else if(x<=8)   _data="PEEK";
    else if(x<=10)  _data="SPY" ;
    else if(x<=12)  _data="SWAP";
}
//翻转
void Card::flip(Player& who){}
//偷看
int Card::peek(){}
//间谍
int Card::spy(Player& who){}
//交换
void Card::swap(Player& who){}
//发动该牌技能
int Card::skill(Player &who){
    int res=-1;
    if(_data=="FLIP")
        this->flip(who);
    else if(_data=="PEEK")
        res=this->peek();
    else if(_data=="SPY")
        res=this->spy(who);
    else if(_data=="SWAP")
        this->swap(who);
    return res;
}
//返回牌面技能
std::string Card::data(){
    if(_is_front)
        return _data;
    else
        return "";
}

int Card::num(){
    if(_is_front)
        return card_num;
    else
        return -1;
}
//返回牌的状态
bool Card::is_front(){
    return _is_front;
}
//反转牌
void Card::turn(){
    _is_front=(_is_front)?false:true;
}