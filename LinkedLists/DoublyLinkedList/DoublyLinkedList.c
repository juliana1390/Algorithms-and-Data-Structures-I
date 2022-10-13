#include<stdio.h>
#include<stdlib.h>
#include "DoublyLinkedList.h"

void CreateList(ListType *L)
{
    (*L).last = NULL;
    (*L).first = NULL;
    printf("Success!\n");
}

int Insert(ListType *L, ItemType I)
{
    PointerType P;

    P = (PointerType) malloc(sizeof(NodeType));
    if(P == NULL)
    {
        printf("No memory available!");
        return NO_MEMORY;
    }

    P->item = I;

    P->previous = NULL;
    if(EmptyList(L))
    {
        L->first = P;
        L->last = P;
        P->next = NULL;
        
    }
    else if (L->first->item.key > I.key) // 1st position
    {
        P->next = L->first;
        L->first->previous = P;
        L->first = P;
    }
    else // any other position
    {
        PointerType aux;
        aux = L->first;
        while (aux->next != NULL && aux->next->item.key < I.key)
        {
            aux = aux->next;
        }

        P->next = aux->next;
        P->previous = aux;
        aux->next = P;
        if(P->next != NULL) P->next->previous = P; 
    }

    return NO_ERROR;
    
}

int Delete(ListType *L, KeyType K)
{
    PointerType P = Search(L, K);
    int error = DeletePosition(L, P);

    if (error == INVALID_POS) printf("Oh no!");

    else printf("Success!");
    
}

static int DeletePosition(ListType *L, PointerType P)
{
    //PointerType P;

    if (P == NULL)
    {
        printf("Invalid position\n");
        return INVALID_POS;
    }

    // the only one element
    if (P == L->first && P == L->last)
    {
        CreateList(L);
        free(P);
        return NO_ERROR;
    }

    // deleting from beginning
    if (P == L->first)
    {
        L->first = L->first->next;
        L->first->previous = NULL;
        free(P);
        return NO_ERROR;
    }
    
    // deleting from middle
    /*PointerType aux = L->first;
    while (aux->next != NULL && aux->next != P)
    {
        aux  = aux->next;
    }*/
    
    P->previous->next = P->next;
    
    // deleting from end
    if (P == L->last)
    {
        L->last = P->previous;
    }
    else
    {
        P->next->previous = P->previous;
    }

    free(P);
    return NO_ERROR;

}

PointerType Search(ListType *L, KeyType K)
{
    PointerType P;

    P = L->first;
    while (P != NULL)
    {
        if (P->item.key == K) return P;
        P = P->next;
    }

    return P;  
}

char EmptyList(ListType *L)
{
    return L->last == NULL && L->first == NULL;
}

void PrintList(ListType *L)
{
    PointerType P = L->first;

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

void PrintReversedList(ListType *L)
{
    PointerType P = L->last;

    int i = 0;
    while (P != NULL)
    {
        if (P->previous != NULL)
        {
            printf("%d: key = %d, previous = %d\n", i, P->item.key, P->previous->item.key);
        }
        else printf("%d: key = %d, previous = NULL\n", i, P->item.key);
        P = P->previous;
        i++;
    }
}