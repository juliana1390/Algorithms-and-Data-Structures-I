#include <stdio.h>
#include <string.h>
#include "set.h"

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