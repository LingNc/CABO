#include"Define.h"
#include<vector>
class Game_Master{
public:
    //构造函数
    Game_Master();
    Player& Now;
private:
    std::vector<Player> _Playerarr;
    New_Pile _NewPile;
    Dis_Pile _DisPile;
    Card _NewCard;
};