//
// Created by user-pc on 11/09/2017.
//

#ifndef UNTITLED_NODE_H
#define UNTITLED_NODE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node* next;
    struct node* pre;
    int value;
}node;
node* createNode(int);

#endif //UNTITLED_NODE_H
