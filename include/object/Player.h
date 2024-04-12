#ifndef _Player_H
#define _Player_H

#include<string>
#include<vector>
#include"Declare.h"
#include"Card.h"
// #include"Circle.h"

class Player{
public:
    // //召唤卡波
    // void CABO();

    // //从摸牌堆摸牌
    // void Single_Much();
    // void Single();

    // //从弃牌堆摸牌
    // void Dis_Single_Much();
    // void Dis_Single();

    // //放入新牌
    // void add_card(Card card);
    // //替换第x张牌
    // Card replace_card(int x,Card card);
    // //扔掉第x张牌
    // Card throw_card(int x);

    // //显示x张手牌点数
    // int show(int x);
    // //显示x张手牌功能
    // std::string show_data(int x);
    //摸牌入手
    void in_hand(Card card);
    //弃掉手牌
    Card out_hand();
    //显示玩家名字
    std::string name();
    //显示玩家序号
    int rank();
    //显示玩家积分
    int score();

    //友元
    friend Circle;

    Player(std::string name);

private:
    Card now_card;
    bool _in_hand;
    //信息
    std::string _name;
    int _rank;
    int _score;
    int card_num;

};
#endif