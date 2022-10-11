#include<stdio.h>
#include "StaticList.h"

int main(void)
{
    ListType L;
    ItemType item;
    PointerType P;

    CreateList(&L);

    item.key = 5;
    Insert(&L, item);

    item.key = 1;
    Insert(&L, item);

    item.key = 3;
    Insert(&L, item);

    item.key = 0;
    Insert(&L, item);

    item.key = 25;
    Insert(&L, item);

    item.key = -3;
    Insert(&L, item);

    PrintList(&L);

    printf("Has the element be found? Where? %d\n", Search(&L, 3));
    printf("Has the element be found? Where? %d\n", Search(&L, 450));

    printf("\n");
    Remove(&L, 5);
    PrintList(&L);
    Remove(&L, -3);
    PrintList(&L);
    Remove(&L, 3);
    PrintList(&L);
    Remove(&L, 450);
    PrintList(&L);

    printf("Has the element be found? Where? %d\n", Search(&L, 3));
    printf("Has the element be found? Where? %d\n", Search(&L, 450));

    return 0;
}
