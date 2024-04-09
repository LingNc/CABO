#ifndef _Player_H
#define _Player_H

#include<string>
#include<vector>
#include"Hand_Card.h"
class Player{
public:
    Player(){}

private:
    Hand_Card hand;
    int score;
    int card_num;

};
#endif