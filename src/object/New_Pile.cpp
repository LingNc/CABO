#include"New_Pile.h"
//构造函数
New_Pile::New_Pile():_error(-1),max(52){
    //新建一副牌
    for(int i=0;i<=13;i++){
        Card _temp(i);
        int t=(i==0||i==13)?2:4;
        while(t--){
            new_card_deck.push_back(_temp);
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
        std::iter_swap(new_card_deck.begin()+i,new_card_deck.begin()+ran);
    }
}
//返回剩余牌数
int New_Pile::size(){
    return num;
}
//摸出一张顶部的牌
Card New_Pile::draw(){
    Card _temp(0);
    if(card_deck.empty())
        //返回错误
        return _error;
    else{
        _temp=card_deck.top();
        card_deck.pop();
    }
    return _temp;
}
//是否为空
bool New_Pile::empty(){
    if(size())
        return false;
    else
        return true;
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