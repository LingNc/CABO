#include"Dis_Pile.h"
//入牌
void Dis_Pile::Cardin(Card dis_card){
    if(dis_card.is_front==false)
        dis_card.is_front=true;
    dis_card_deck.push(dis_card);
}
//摸牌
Card Dis_Pile::draw(){
    temp_card=dis_card_deck.top();
    dis_card_deck.pop();
    return temp_card;
}
//显示顶部牌
const Card &Dis_Pile::top(){
    return dis_card_deck.top();
}
