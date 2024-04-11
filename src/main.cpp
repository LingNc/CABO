#include<iostream>
#include<cstdlib>
#include"Define.h"
#include"setting.h"
#include"page.h"
#include"Game.h"
int main(){
    //主循环
    while(1){
        W_clear();

        print(" 1.start game\n");
        print(" 2.rules\n");
        print(" 3.exit\n");
        putchar('\n');

        print("inupt numbers to select: ");
        int select;
        std::cin>>select;
        switch(select){
        case 1:
            Game();
            break;
        case 2:
            rules();
            break;
        case 3:
            return 0;
            break;
        }
    }
    return 0;
}