#ifndef _Circle_H
#define _Circle_H

#include"Player.h"
#include<string>
#include<vector>

class Circle{
public:
    //添加新的玩家
    void add(std::string name);
    //返回玩家的数量
    int num();
    //切换到下一个玩家
    void next();

    //返回现在玩家的引用
    Player &now();
    //返回指定玩家的引用
    Player &rank(int x);

    //构造函数
    Circle():
        num_player(0),
        now_player_rank(0){}
private:
    std::vector<Player> arr_player;
    //Player &temp_plr;
    int num_player;
    int now_player_rank;

};

#endif