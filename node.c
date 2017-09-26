//
// Created by user-pc on 11/09/2017.
//
#include "node.h"




node* createNode(int val)
{
    node* n = (node*)malloc(sizeof(node));
    if(n==NULL)
    {
    printf("error in createNode n==NULL\n");
    return NULL;
    }

    n->value = val;
    n->next = NULL;
    n->pre = NULL;
    return n;
}