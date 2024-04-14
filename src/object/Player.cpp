#include"Player.h"
#include"setting.h"
//构造函数
Player::Player(std::string name):
    _name(name),
    _score(0),
    _num(0),
    _error(-1){}

//召唤卡波
void CABO(){

}
//显示手牌
void Player::show(){
    for(auto it=_hand.begin();it<_hand.end();it++){
        if(it->is_front)
            std::cout<<it->num<<' ';
        else
            std::cout<<'X'<<' ';
    }
}

//在x前添加牌
bool Player::add_card(int x,Card card){
    //添加失败返回0
    if(x>_hand.size()-1){
        //报错
        print("input over the max value!");
        return 0;
    }
        _hand.insert(_hand.begin()+x-2,card);
    return 1;
}

//在x处取出牌
Card Player::take_card(int x,Card card){
    //错误返回一张error牌
    if(x>_hand.size()-1){
        print("input over the max value!");
        return _error;
    }
        Card temp(card);
    _hand.erase(_hand.begin()+x-1);
    return temp;
}

//牌尾添加一张牌
void Player::push_card(Card card){
    _hand.push_back(card);
}

//反转牌面,返回状态
bool Player::turn_card(int x){
    //错误返回-1
    if(x>_hand.size()){
        print("input over the max value!");
        return -1;
    }
    else{
        _hand[x-1].is_front++;
        return _hand[x-1].is_front;
    }
}

//查看牌面
Card &Player::see_card(int x){
    //错误返回错误牌
    if(x>_hand.size()){
        print("input over the max value!");
        return _error;
    }
    else
        return _hand[x-1];
}

//显示玩家名字
std::string Player::name(){
    return _name;
}

//显示玩家序号
int Player::rank(){
    return _rank;
}

//显示玩家积分
int Player::score(){
    return _score;
}

//显示玩家手牌数
int Player::num(){
    return _num;
}