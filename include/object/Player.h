#ifndef _Player_H
#define _Player_H

#include<string>
#include<vector>
#include"Declare.h"
#include"Card.h"

class Player{
public:
    //构造函数
    Player(std::string name);

    //召唤卡波
    void CABO();
    //显示手牌状态
    void show();

    //在x前添加牌
    bool add_card(int x,Card card);
    //在x处取出牌
    Card take_card(int x,Card card);
    //添加一张牌
    void push_card(Card card);
    //反转牌面,返回状态
    bool turn_card(int x);
    //查看牌面
    Card &see_card(int x);

    //显示玩家名字
    std::string name();
    //显示玩家序号
    int rank();
    //显示玩家积分
    int score();
    //显示玩家手牌数
    int num();

private:
    //手牌组
    std::vector<Card> _hand;
    Card _error;
    //信息
    std::string _name;
    int _rank;
    int _score;
    int _num;
};
#endif