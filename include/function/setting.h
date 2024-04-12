#ifndef _setting_H
    #define _setting_H
#include"Define.h"
#include<cstdlib>
#include<iostream>

//刷新页面
void W_clear();
//打印文字
void print(std::string str);
//o 为主循环对象
//显示玩家列表
void show_player_list(Circle& o);
//o 为主循环对象
//输入新的玩家
void input_new_player(Circle &o);
//输入回车继续
void pause(std::string out);

#endif
