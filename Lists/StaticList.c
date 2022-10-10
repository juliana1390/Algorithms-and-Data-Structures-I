#include<stdio.h>
#include "StaticList.h"

void CreateList(ListType *L)
{
    L -> last = -1;
    printf("Success!\n");
}

int Insert(ListType *L, ItemType I)
{
    if(FullList(L))
    {
        printf("The list is full!");
        return FULL_LIST;
    }

    L -> last++;
    L -> items[L -> last] = I;
}

int Remove(ListType *L, KeyType K)
{
    RemovePosition(L, Search(L, K));
}

static RemovePosition(ListType *L, PointerType P)
{
    PointerType a;

    if (P < 0 || P > L -> last)
    {
        printf("Invalid position\n");
        return INVALID_POS;
    }

    for (a = P; a < L -> last; a++)
    {
        L -> items[a] = L -> items[a+1];
    }

    L -> last--;
}

PointerType Search(ListType *L, KeyType K)
{
    PointerType a;

    for (a = 0; a <= L -> last; a++)
    {
        if (L -> items[a].key == K)
        {
            return a;
        }
        
    }
    return NOT_FOUND;  
}

char EmptyList(ListType *L)
{
    return L -> last == -1;
}

char FullList(ListType *L)
{
    return L -> last == MAXSIZE -1;
}

void PrintList(ListType *L)
{
    PointerType a;

    printf("List:");
    for (a = 0; a <= L -> last; a++)
    {
        printf(" %d", L -> items[a].key);
    }
    printf("\n\n");
}