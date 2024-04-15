#ifndef _Dis_Pile_H
#define _Dis_Pile_H

#include<stack>
#include"Declare.h"
#include"Card.h"

class Dis_Pile{
public:
    //入牌
    void Cardin(Card dis_card);
    //摸牌
    Card draw();
    //显示顶部牌
    const Card &top();
    //构造函数
    Dis_Pile():_error(-1) {}
private:
    std::stack<Card> dis_card_deck;
    const Card _error;

};
#endif