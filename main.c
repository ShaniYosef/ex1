#include "list.h"
#include "queue.h"
#define ERROR -1

void printlist(list*);
void printque(queue*);
int main() {

    int input = 0,i;
    queue* q = NULL;
    q = initQ();
    for (i=0;i<10;i++)
    {
        printf("insert an integer: ");
        scanf("%d",&input);
        insertQ(createNode(input),q);

    }

    printque(q);
    printf("%d\n", firstNodeQ(q));
    printque(q);
    destructQ(q);
    printque(q);

    system("PAUSE");
    return 0;
}

void printlist(list* l)
{
    node* n;
    if (l->start == NULL)
    {
        printf("list is empty\n");
        return;;
    }
    printf("the list:\n");
    for(n = firstNodeL(l);n!=NULL;n = nextNodeL(n))
    {
        printf("%d ",valueL(n));
    }
    printf("\n");
}

void printque(queue* q)
{
    node* n;
    int len=0,value = 0, i;
    if (q->start == NULL)
    {
        printf("queue is empty\n");
        return;
    }
    printf("the queue:\n");
    len = lenQ(q);

    for(i= 0;i<len; i++)
    {
        value = removeQ(q);
        printf("%d ", value);
        insertQ(createNode(value),q);
    }
    printf("\n");
}