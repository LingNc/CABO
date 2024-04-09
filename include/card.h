#ifndef _card_H
#define _card_H

#include<string>

class card{
public:
    card(int x);
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