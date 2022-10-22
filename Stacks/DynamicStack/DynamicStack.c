#include<stdio.h>
#include<stdlib.h>
#include "DynamicStack.h"

void CreateStack(StackType *S)
{
    (*S).first = NULL;
    printf("Success!\n");
}

int Insert(StackType *S, ItemType I)
{
    PointerType P;

    P = (PointerType) malloc(sizeof(NodeType));
    if(P == NULL)
    {
        printf("No memory available!");
        return NO_MEMORY;
    }

    P->item = I;

    if (EmptyStack(S))
    {
        P->next = NULL;
        S->first = P;
    }
    else
    {
        P->next = S->first;
        S->first = P;
    }
    return NO_ERROR;
    
}

void Delete(StackType *S)
{
    if (EmptyStack(S))
    {
        printf("Empty Stack!");
        return;
    }

    // the only one
    if (S->first->next == NULL)
    {
        free(S->first);
        CreateStack(S);
        return;
    }

    // Delete from beggining
    PointerType P = S->first;
    S->first = S->first->next;
    free(P);
}

ItemType StackTop(StackType *S)
{
    if (!EmptyStack(S)) return S->first->item;
    
    ItemType I;
    I.key = -1;
    return I;
}

char EmptyStack(StackType *S)
{
    return S->first == NULL;
}

void PrintStack(StackType *S)
{
    PointerType P = S->first;

    int i = 0;
    while (P != NULL)
    {
        if (P->next != NULL)
        {
            printf("%d: key = %d, next = %d\n", i, P->item.key, P->next->item.key);
        }
        else printf("%d: key = %d, next = NULL\n", i, P->item.key);
        P = P->next;
        i++;
    }
}