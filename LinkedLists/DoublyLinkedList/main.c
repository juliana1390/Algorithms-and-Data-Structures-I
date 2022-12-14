#include<stdio.h>
#include<stdlib.h>
#include "DoublyLinkedList.h"

int main()
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
    printf("\n");

    Delete(&L, 5);
    printf("\n");
    PrintList(&L);
    printf("\n");

    Delete(&L, -3);
    printf("\n");
    PrintList(&L);
    printf("\n");

    Delete(&L, 3);
    printf("\n");
    PrintList(&L);
    printf("\n");

    Delete(&L, 450);
    printf("\n");
    PrintList(&L);
    printf("\n");

    PrintReversedList(&L);

    P = L.first;
    while (P != NULL)
    {
        L.first = P->next;
        printf("Cleaning...\n");
        free(P);
        P = L.first;
    }
    
    return 0;
}
