//
// Created by user-pc on 11/09/2017.
//
#include "node.h"
#ifndef UNTITLED_QUEUE_H
#define UNTITLED_QUEUE_H

typedef struct queue{
    node* start;
    node* end;
    int len; //length of queue
}queue;

queue* initQ();
void destructQ(queue*);
void insertQ(node*, queue*);
int removeQ(queue*);
int lenQ(queue*);
int firstNodeQ(queue*);

#endif //UNTITLED_QUEUE_H
