#ifndef _Card_H
#define _Card_H

// #include"New_Pile.h"
// #include"Circle.h"
// #include"Player.h"
#include<string>
#include"Declare.h"

struct Card{
    //
    std::string data;
    int num;
    bool is_front;
    Card(int x);
};

// class Card{
// public:
//     //初始化构造函数
//     Card(int x);
//     //返回牌面技能
//     std::string data();
//     int num();
//     //返回牌的状态
//     bool is_front();
//     //反转牌
//     void turn();
//     //声明友元    函数供New_Pile访问
//         friend New_Pile;
// private:
//     std::string _data;
//     bool _is_front;
//     int card_num;
// };

#endif