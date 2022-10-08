#include <stdio.h>
#include <string.h>

#define max 100
//const int max = 100;

typedef char t_element;
typedef t_element t_set[max];
//typedef int t_element;
//typedef t_element t_set[100];


/*void initialize(t_set A);
void union(t_set A, t_set B, t_set C);
void intersection(t_set A, t_set B, t_set C);
void insertion(t_element e, t_set A);
void removal(t_element e, t_set A);
void isAnElementOf(t_element e, t_set A);*/

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

void *isAnElementOf(t_element e, t_set A)
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

int main(void)
{
    
    t_set A, B, C;
    t_element e;

    initialize(A);
    initialize(B);
    initialize(C);
    
    insertion(2, A);
    insertion(22, A);
    //insertion(222, A);

    removal(2, A);

    insertion(10, A);
    insertion(20, A);
    insertion(30, A);
    insertion(40, A);

    insertion(50, B);
    insertion(60, B);
    insertion(70, B);
    insertion(80, B);
    

    print_set(A);
    printf("\n");

    print_set(B);
    printf("\n");

    _union(A, B, C);
    print_set(C);
    printf("\n");

    intersection(A, B, C);
    print_set(C);

    return 0;
}