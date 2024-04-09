#include"card.h"

card::card(int x){
    if(x<=4||x==13) data="NULL";
    else if(x<=6)   data="FLIP";
    else if(x<=8)   data="PEEK";
    else if(x<=10)  data="SPY" ;
    else if(x<=12)  data="SWAP";
}
void card::skill(){
    switch(data.c_str()){
        case "FLIP":
            flip();
            break;
        case "PEEK":
            peek();
            break;
        case "SPY":
            spy();
            break;
        case "SWAP":
            swap();
            break;
    }
}
