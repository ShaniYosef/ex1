//
// Created by user-pc on 10/09/2017.
//
#include "list.h"
// All the list.h functions ends with 'L'

//creates new list
list* initL()
{
    list* newList = (list*) malloc(sizeof(list));
    if(newList==NULL)
    {
        printf("error in init newList==NULL\n");
        return NULL;
    }
    newList->start = NULL;
    newList->end = NULL;
    newList->sum = 0;
    newList->len = 0;
    return newList;
}


//deletes the entire list
void destructL(list* l)
{
    if(l->start!=NULL)  // not empty
    {

        node* curr= l->start;
        l->start = NULL;
        for(; curr->next !=NULL;curr = curr->next,free(curr->pre));
        free(curr);
    }
    l->start = NULL;
    l->end = NULL;
    l->sum = 0;
    l->len = 0;
}

//inserts new node at the start of the list
void insertL(node* newNode, list* l)
{
    if(l->start == NULL) // if list is empty
    {
        l->start = newNode;
        l->end = newNode;
    }

    else
    {
        newNode->next = l->start;
        l->start->pre = newNode;
        l->start = newNode;
    }

    l->sum += newNode->value;
    l->len+=1;

}

// deletes a specific node from the list
void delL(node* todel,list* l)
{
    if (todel!=NULL)
    {
        // delete the first node
        if (todel->pre == NULL)
        {
                l->start = todel->next;
                if (l->start != NULL) // if more than 1 node
                    l->start->pre = NULL;
        }
        else
        {
                todel->pre->next = todel->next;
                if (todel->next != NULL) // if todel is not the last node
                    todel->next->pre = todel->pre;
        }


        l->sum -= todel->value;
        l->len -= 1;
        free(todel);
    }
}

//returns length of the list
int lenL(list* l)
{
    return l->len;
}

//returns first node of the list
node* firstNodeL(list* l)
{
    return l->start;
}

//returns last node of the list
node* lastNodeL(list* l)
{
    return l->end;
}

//returns the node that follow the given node
node* nextNodeL(node* curr)
{
    if(curr!=NULL)
        return curr->next;
}

//returns the node that come before the given node
node* preNodeL(node* curr)
{
    if(curr!=NULL)
        return curr->pre;
}

//returns the value of the given node
int valueL(node* curr)
{
    if(curr!=NULL)
        return curr->value;
}

//returns the average of all the nodes
float avrgL(list* l)
{
    return (float)l->sum / l->len;
}
