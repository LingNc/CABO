#include"Dis_Pile.h"

void Dis_Pile::Cardin(Card dis_card){
    dis_card_deck.push(dis_card);
}

Card Dis_Pile::draw(){
    temp_card=dis_card_deck.top();
    dis_card_deck.pop();
    return temp_card;
}
