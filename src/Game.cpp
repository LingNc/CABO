#include"Define.h"
#include"setting.h"
#include"page.h"
#include"Game.h"
void Game(){
    W_clear();

    Circle o;
    int n;
    std::cout<<"input how many people:";
    std::cin>>n;
    while(n--){
        W_clear();
        show_player_list(o);
        input_new_player(o);
    }
    W_clear();
    show_player_list(o);

    system("pause");

    New_Pile newpile;
    Dis_Pile dispile;

    //弃牌堆初始化
    dispile.Cardin(newpile.draw());

    for(int i=1;i<=o.num();i++){
        int t=4;
        while(t--){
            o.rank(i).desk.addcard(newpile.draw());
        }

    }

}