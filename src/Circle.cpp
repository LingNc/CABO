#include"Circle.h"

void Circle::add(std::string name){
    arr_player.push_back(Player(name));
    int rank=arr_player.size();
    arr_player[rank-1].rank=rank;
    num_player=rank;
}
int Circle::num(){
    return num_player;
}
void Circle::next(){
    if(now_player_rank!=num_player-1){
        now_player_rank++;
    }
    else{
        now_player_rank=0;
    }
}

Player &Circle::now(){
    return arr_player[now_player_rank];
}
Player &Circle::rank(int x){
    return arr_player[x-1];
}