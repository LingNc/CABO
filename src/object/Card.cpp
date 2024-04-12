#include"Card.h"
//初始化构造函数
Card::Card(int x):
    is_front(false),
    num(x){
    if(x<=4||x==13) data="NULL";
    else if(x<=6)   data="FLIP";
    else if(x<=8)   data="PEEK";
    else if(x<=10)  data="SPY" ;
    else if(x<=12)  data="SWAP";
}
// //返回牌面技能
// std::string Card::data(){
//     if(_is_front)
//         return _data;
//     else
//         return "";
// }

// int Card::num(){
//     if(_is_front)
//         return card_num;
//     else
//         return -1;
// }
// //返回牌的状态
// bool Card::is_front(){
//     return _is_front;
// }
// //反转牌
// void Card::turn(){
//     _is_front=(_is_front)?false:true;
// }