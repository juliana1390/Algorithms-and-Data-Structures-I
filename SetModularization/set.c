#include <stdio.h>
#include <string.h>
#include "set.h"

void initialize(t_set A)
{
    memset(A, 0, sizeof(t_set));
}

void _union(t_set A, t_set B, t_set C)
{
    for(int i = 0; i < max; i++)
    {
        C[i] = A[i] || B[i]; // if (A[i] == 1 || B[i] == 1) C[i] = 1
    }
}

void intersection(t_set A, t_set B, t_set C)
{
    for(int i = 0; i < max; i++)
    {
        C[i] = A[i] && B[i];
    }
}

void insertion(t_element e, t_set A)
{
    if(e < 0 || e >= max)
    {
        printf("invalid element\n");
        return;
    }
    if(A[e])
    {
        printf("element already inserted\n");
    }
    A[e] = 1;
}

int isAnElementOf(t_element e, t_set A)
{
    if(e < 0 || e >= max)
    {
        printf("invalid element\n");
        return -1;
    }
    return A[e];
}

void removal(t_element e, t_set A)
{
    if(e < 0 || e >= max)
    {
        printf("invalid element\n");
        return;
    }
    if(!(e, A))
    {
        printf("element was not in the set\n");
    }
    A[e] = 0;
}

void print_set(t_set A)
{
    printf("{");
    for(int i = 0; i < max; i++)
    {
        if (isAnElementOf(i, A))
        {
            printf("%d,", i);
        }
        
    }
    printf("}");
}
