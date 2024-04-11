#include"setting.h"
#include<iostream>
//刷新页面
void W_clear(){
    system("clear");
}
//打印文字
void print(std::string str){
    std::cout<<str;
}
//显示玩家列表
//o 为主循环对象
void show_player_list(Circle &o){
    std::cout<<"Player list:\n";
    if(o.num()==0){
        std::cout<<"  No Player Now."<<'\n';
    }
    else{
        for(int i=1;i<=o.num();i++){
            std::cout<<"  player "<<i<<": "<<o.rank(i).name()<<'\n';
        }
    }
}
//o 为主循环对象
//输入新的玩家
void input_new_player(Circle& o){
    std::cout<<"add new player name: ";
    std::string name;
    std::cin>>name;
    o.add(name);
}
