#include"Hand_Card.h"
//构造函数
Hand_Card::Hand_Card():temp_card(0){
    card_num=0;
    max=4;
}
//新加手牌
void Hand_Card::addcard(Card card){
    C.push_back(card);
    card_num=C.size();
}
//丢弃手牌
Card Hand_Card::discard(int rank){
    temp_card=C[rank-1];
    C.erase(C.begin()+rank-1);
    card_num=C.size();
    return temp_card;
}
//替换手牌
Card Hand_Card::replace(int rank,Card card){
    temp_card=C[rank-1];
    C[rank-1]=card;
    return temp_card;
}
//显示rank手牌点数
int Hand_Card::show(int rank){
    if(C.size()<rank)
        return -1;
    else
        return C[rank-1].num;
}
//显示rank手牌功能
std::string Hand_Card::show_data(int rank){
    if(C.size()<rank)
        return "No Card!";
    else
        return C[rank-1].data;
}