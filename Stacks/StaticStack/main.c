#include<stdio.h>
#include "StaticStack.h"

int main(void)
{
    StackType S;
    ItemType item;

    CreateStack(&S);

    item.key = 5;
    Insert(&S, item);

    item.key = 1;
    Insert(&S, item);

    item.key = 3;
    Insert(&S, item);

    item.key = 0;
    Insert(&S, item);

    item.key = 25;
    Insert(&S, item);

    item.key = -3;
    Insert(&S, item);                          

    PrintStack(&S);

    item = StackTop(&S);
    printf("Top = %d", item.key);

    Delete(&S);
    Delete(&S);
    Delete(&S);
    printf("\n");
    PrintStack(&S);
   
    return 0;
}