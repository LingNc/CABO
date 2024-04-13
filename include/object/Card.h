#ifndef _Card_H
#define _Card_H

#include<string>
#include"Declare.h"

struct Card{
    //
    std::string data;
    int num;
    bool is_front;
    Card(int x);
    //拷贝构造函数
    Card(Card &other);
};

#endif