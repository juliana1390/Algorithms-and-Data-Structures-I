#ifndef SET_H
#define SET_H

#define max 100

typedef char t_element;
typedef t_element t_set[max];

void initialize(t_set A);
void _union(t_set A, t_set B, t_set C);
void intersection(t_set A, t_set B, t_set C);
void insertion(t_element e, t_set A);
void removal(t_element e, t_set A);
int isAnElementOf(t_element e, t_set A);
void print_set(t_set A);

#endif