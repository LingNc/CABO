#include"Card.h"

Card::Card(int x){
    if(x<=4||x==13) data="NULL";
    else if(x<=6)   data="FLIP";
    else if(x<=8)   data="PEEK";
    else if(x<=10)  data="SPY" ;
    else if(x<=12)  data="SWAP";
}
void Card::skill(){
    if(data=="FLIP")
        flip();
    else if(data=="PEEK")
        peek();
    else if(data=="SPY")
        spy();
    else if(data=="SWAP")
        swap();
    else
        num();
}

std::string Card::num(){
    return data;
}