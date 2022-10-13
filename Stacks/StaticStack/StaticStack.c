#include<stdio.h>
#include "StaticStack.h"

void CreateStack(StackType *S)
{
    S->last = -1;
    printf("Success!\n");
}

int Insert(StackType *S, ItemType I)
{
    if(FullStack(S))
    {
        printf("The list is full!");
        return FULL_STACK;
    }

    S->last++;
    S->items[S->last] = I;
}

int Delete(StackType *S)
{
    if (!EmptyStack(S)) S->last--;
}

ItemType StackTop(StackType *S)
{
    if (!EmptyStack(S)) return S->items[S->last];
    
    ItemType I;
    I.key = -1;
    return I;
}

char EmptyStack(StackType *S)
{
    return S->last == -1;
}

char FullStack(StackType *S)
{
    return S->last == MAXSIZE - 1;
}

void PrintStack(StackType *S)
{
    PointerType a;

    printf("Stack:");
    for (a = S->last; a >= 0; a--)
    {
        printf(" %d", S->items[a].key);
    }
    printf("\n\n");
}