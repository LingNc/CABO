#ifndef _Hand_Card_H
#define _Hand_Card_H

#include<vector>
#include"Declare.h"
#include<string>
#include"Card.h"

class Hand_Card{
public:
    //构造函数
    Hand_Card();
    //向手牌中放入一张新牌
    void addcard(Card card);
    //扔掉第rank张手牌，并返回该牌
    Card discard(int rank);
    //替换掉第rank张手牌为rep_card
    Card replace(int rank,Card card);
    //显示rank手牌点数
    int show(int rank);
    //显示rank手牌功能
    std::string show_data(int rank);
private:
    std::vector<Card> C;
    Card temp_card;
    int card_num;
    int max;
};
#endif