#include"Hand_Card.h"
//构造函数
Hand_Card::Hand_Card(){
    card_num=0;
    max=4;
}
//新加手牌
void Hand_Card::push(Card new_card){
    C.push_back(new_card);
    card_num=C.size();
}
//丢弃手牌
const Card& Hand_Card::discard(int rank){
    temp_card=C[rank-1];
    C.erase(C.begin()+rank-1);
    card_num=C.size();
    return temp_card;
}
//替换手牌
void Hand_Card::replace(int rank,Card rep_card){
    C[rank-1]=rep_card;
}