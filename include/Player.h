#ifndef _Player_H
#define _Player_H

#include<string>
#include<vector>
#include"Hand_Card.h"
#include"Card.h"
#include"Circle.h"

class Player{
public:

    //召唤卡波
    void CABO();

    //从摸牌堆摸牌
    void Single_Much();
    void Single();

    //从弃牌堆摸牌
    void Dis_Single_Much();
    void Dis_Single();

    //显示手牌
    int show();
    std::string show_data();
    //友元
    friend Circle;

    Player(std::string plr_name);

private:
    //手牌区
    Hand_Card desk;
    Card temp_card;

    //信息
    std::string name;
    int rank;
    int score;
    int card_num;

};
#endif