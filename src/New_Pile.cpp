#include"New_Pile.h"

int New_Pile::size(){
    return num;
}

Card New_Pile::draw(){
    if(card_deck.empty()){
        temp_card.data="NULL";
    }
    else{
        temp_card=card_deck.top();
        card_deck.pop();
    }
    return temp_card;
}