#include"Player.h"

Player::Player(std::string plr_name):
    temp_card(0),
    _name(plr_name),
    _score(0),
    card_num(0)
    {}
//显示手牌
int Player::show(int x){
    return desk.show(x);
}
std::string Player::show_data(int x){
    return desk.show_data(x);
}
//显示信息
std::string Player::name(){
    return _name;
}
int Player::rank(){
    return _rank;
}
int Player::score(){
    return _score;
}