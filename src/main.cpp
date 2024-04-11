#include<iostream>
#include<cstdlib>
#include"Circle.h"
#include"New_Pile.h"
#include"Dis_Pile.h"
#include"Player.h"


int main(){
    int n;
    std::cout<<"input how many people:";
    std::cin>>n;

    Circle o;
    while(n--){
        system("clear");
        if(o.num()==0){
            std::cout<<"no player!"<<'\n';
        }
        else{
            for(int i=1;i<=o.num();i++){
                std::cout<<"player "<<i<<':'<<o.rank(i).name()<<'\n';
            }
        }
        std::cout<<"add new player:";
        std::string name;
        std::cin>>name;
        o.add(name);
    }
    system("clear");
    std::cout<<"Player list:\n";
    for(int i=1;i<=o.num();i++){
        std::cout<<"player "<<i<<':'<<o.rank(i).name()<<'\n';
    }
    return 0;
}