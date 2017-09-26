//
// Created by user-pc on 10/09/2017.
//

#ifndef UNTITLED_LIST_H
#define UNTITLED_LIST_H
#define ERROR -3
#include "node.h"


typedef struct list{
    node* start;
    node* end;
    int sum; // sum of all the nodes
    int len; // length of list
}list;

list* initL();
void destructL(list*);
void insertL(node*, list*);
void delL(node*,list*);
int lenL(list*);
node* firstNodeL(list*);
node* lastNodeL(list*);
node* nextNodeL(node*);
node* preNodeL(node*);
int valueL(node*);
float avrgL(list*);
#endif //UNTITLED_LIST_H



