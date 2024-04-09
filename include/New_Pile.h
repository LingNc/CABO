#ifndef _New_Pile_H
#define _New_Pile_H

#include"Card.h"
#include<vector>

class New_Pile{
public:
    void Reset();
private:
    void Shuffle();
    std::vector<Card> card();
};
#endif