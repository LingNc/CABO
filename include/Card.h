#ifndef _Card_H
#define _Card_H

#include<string>

class Card{
public:
    Card(){};
    Card(int x);
    void skill();
private:
    int num;
    std::string data;
    void flip();
    void peek();
    void spy();
    void swap();
};
#endif