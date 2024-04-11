#ifndef _New_Pile_H
#define _New_Pile_H

#include"Declare.h"
#include"Card.h"
#include<stack>
#include<vector>


class New_Pile{
public:
    //重置牌堆
    void Reset();
    //返回剩余牌数
    int size();
    //摸出一张顶部的牌
    Card draw();

    //构造函数
    New_Pile();
private:
    //洗牌算法
    void Shuffle();
    std::vector<Card> new_card_deck;
    std::stack<Card> card_deck;
    Card temp_card;
    int num;
    int max;
};
#endif