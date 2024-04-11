#ifndef _Card_H
#define _Card_H

// #include"New_Pile.h"
// #include"Circle.h"
// #include"Player.h"
#include<string>
#include"Declare.h"

class Card{
public:
    //初始化构造函数
    Card(int x);
    //发动该牌技能
    int skill(Player& who);
    //返回牌面技能
    std::string data();
    int num();
    //返回牌的状态
    bool is_front();
    //反转牌
    void turn();
    //声明友元函数供New_Pile访问
    friend New_Pile;
private:
    std::string _data;
    bool _is_front;
    int card_num;
    //翻转
    void flip(Player& who);
    //偷看
    int peek();
    //间谍
    int spy(Player& who);
    //交换
    void swap(Player& who);
};
#endif