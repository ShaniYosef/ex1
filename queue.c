//
// Created by user-pc on 11/09/2017.
//

#include "queue.h"


//creates new queue
queue* initQ()
{
    queue* newQueue = (queue*) malloc(sizeof(queue));
    if(newQueue==NULL)
    {
        printf("error in init newList==NULL\n");
        return NULL;
    }
    newQueue->start = NULL;
    newQueue->end = NULL;
    newQueue->len = 0;
    return newQueue;
}

//deletes the entire queue
void destructQ(queue* q)
{
    if(q->start!=NULL)  // not empty
    {

        node* curr= q->start;
        q->start = NULL;
        for(; curr->next !=NULL;curr = curr->next,free(curr->pre));
        free(curr);
    }
    q->start = NULL;
    q->end = NULL;
}

//inserts new node at the end of the queue
void insertQ(node* newNode , queue* q)
{
    if(q->start == NULL) // if list is empty
    {
        q->start = newNode;
        q->end = newNode;
    }

    else
    {
        q->end->next = newNode;
        newNode->pre = q->end;
        q->end = newNode;
    }
    q->len+=1;
}

//removes the first node and returns its value
int removeQ(queue* q)
{
    node* todel = q->start;
    int value = todel->value;
    if(todel!=NULL)
    {
        q->start = todel->next;
        if (q->start != NULL)
            q->start->pre = NULL;
    }
    free(todel);
    q->len -=1;
    return  value;
}

//returns length of the queue
int lenQ(queue* q)
{
    return q->len;
}

//returns the value of the first node
int firstNodeQ(queue* q)
{
    if(q->start!=NULL)
        return q->start->value;
    else
        return NULL;
}