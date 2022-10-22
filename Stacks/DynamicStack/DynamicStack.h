#ifndef DYNAMICSTACK_H
#define DYNAMICSTACK_H

#define NO_ERROR 0
#define INVALID_POS -1
#define NOT_FOUND -2
#define NO_MEMORY -3

typedef int KeyType;

typedef struct
{
	KeyType key;
} ItemType;

typedef struct NodeType *PointerType;

typedef struct NodeType
{
    ItemType item;
    struct NodeType *next;   
} NodeType;

typedef struct
{
	PointerType first, last;
} StackType;

void CreateStack(StackType *S);
int Insert(StackType *S, ItemType I);
void Delete(StackType *S);
ItemType StackTop(StackType *S);
char EmptyStack(StackType *S);
void PrintStack(StackType *S);

#endif
