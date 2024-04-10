#ifndef _Circle_H
#define _Circle_H

#include"Player.h"

class Circle{
public:
    Circle();
    ~Circle() {}
private:
    struct Node{
        int rank;
        Player player;
        Node* next;
        Node(int x):rank(x),next(nullptr){}
    };
    Node *root,*head;
    Node* creat();
    void insert();
    int node_num;

};

#endif