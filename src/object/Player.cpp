#include"Player.h"
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

}

//在x前添加牌
bool Player::add_card(int x,Card card){
    if(x>_hand.size()-1)
        return 0;
    _hand.insert(_hand.begin()+x-2,card);
    return 1;
}

//在x处取出牌
Card Player::take_card(int x,Card card){
    if(x>_hand.size()-1)
        return _error;
    Card temp(card);
    _hand.erase(_hand.begin()+x-1);
    return temp;
}

//添加一张牌
void Player::push_card(Card card){
    _hand.push_back(card);
}

//反转牌面,返回状态
bool Player::turn_card(int x){
    if(x>_hand.size())
        return -1;
    else{
        _hand[x-1].is_front++;
        return _hand[x-1].is_front;
    }
}

//查看牌面
Card &Player::see_card(int x){
    if(x>_hand.size())
        return _error;
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