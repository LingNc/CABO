#include"Dis_Pile.h"
//入牌
void Dis_Pile::Cardin(Card dis_card){
    if(dis_card.is_front==false)
        dis_card.is_front=true;
    dis_card_deck.push(dis_card);
}
//摸牌
Card Dis_Pile::draw(){
    if(dis_card_deck.empty())
        //返回错误牌
        return _error;
    Card _temp=dis_card_deck.top();
    dis_card_deck.pop();
    return _temp;
}
//显示顶部牌
const Card &Dis_Pile::top(){
    if(dis_card_deck.empty())
        return _error;
    else
        return dis_card_deck.top();
}
