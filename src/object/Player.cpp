#include"Player.h"

Player::Player(std::string name):
    temp_card(0),
    _name(name),
    _score(0),
    card_num(0){}
// //显示手牌
// int Player::show(int x){
//     return desk.show(x);
// }
// std::string Player::show_data(int x){
//     return desk.show_data(x);
// }
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
// //放入新牌
// void Player::add_card(Card card){
//     desk.push(card);
//     card_num++;
// }
// //替换第x张牌
// Card Player::replace_card(int x,Card card){
//     desk.=card;
// }
// //扔掉第x张牌
// Card Player::throw_card(int x){

// }