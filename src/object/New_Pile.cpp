#include"New_Pile.h"
//构造函数
New_Pile::New_Pile():temp_card(0),max(52){
    //新建一副牌
    for(int i=0;i<=13;i++){
        Card tempcd(i);
        int t=(i==0||i==13)?2:4;
        while(t--){
            new_card_deck.push_back(tempcd);
        }
    }
    //个数统计
    num=new_card_deck.size();

    //洗牌
    Shuffle();

    //入栈
    int t=num;
    while(t--){
        card_deck.push(new_card_deck[t]);
    }
}

#include<cstdlib>
#include<algorithm>
//洗牌算法
void New_Pile::Shuffle(){
    //打乱
    int last=num-1,ran=0;
    for(int i=last;i>=0;i--){
        srand(time(0));
        ran=rand()%(i+1);
        std::swap(new_card_deck[i],new_card_deck[ran]);
    }
}
//返回剩余牌数
int New_Pile::size(){
    return num;
}
//摸出一张顶部的牌
Card New_Pile::draw(){
    if(card_deck.empty()){
        temp_card._data="NULL";
    }
    else{
        temp_card=card_deck.top();
        card_deck.pop();
    }
    return temp_card;
}
//重置牌堆
void New_Pile::Reset(){
    if(card_deck.empty()){

        Shuffle();
        num=max;

        //入栈
        int t=num;
        while(t--){
            card_deck.push(new_card_deck[t]);
        }


    }
}