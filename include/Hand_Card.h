#ifndef _Hand_Card_H
#define _Hand_Card_H

#include<vector>
#include"Card.h"
class Hand_Card{
public:
    Hand_Card();
    void push(Card new_card);
    const Card& discard(int rank);
    void replace(int rank,Card rep_card);
private:
    std::vector<Card> C;
    Card temp_card;
    int card_num;
    int max;
};
#endif