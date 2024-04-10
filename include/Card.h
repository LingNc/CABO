#ifndef _Card_H
#define _Card_H
#include"New_Pile.h"
#include<string>
#include<string>
class Card{
public:
    //初始化构造函数
    Card(int x);
    //发动该牌技能
    void skill();
    //返回牌面数字
    std::string num();

    //声明友元函数供New_Pile访问
    friend New_Pile;
private:
    std::string data;
    int card_num;
    //翻转
    void flip();
    //偷看
    void peek();
    //间谍
    void spy();
    //交换
    void swap();
};
#endif