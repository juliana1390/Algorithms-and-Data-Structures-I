#ifndef STATICSTACK_H
#define STATICSTACK_H

#define MAXSIZE 1000

#define NO_ERROR 0
#define INVALID_POS -1
#define NOT_FOUND -2
#define FULL_STACK -3

typedef int KeyType;
typedef int PointerType;

typedef struct
{
	KeyType key;
} ItemType;

typedef struct
{
	ItemType items[MAXSIZE];
	PointerType last;
} StackType;

void CreateStack(StackType *S);
int Insert(StackType *S, ItemType I);
int Delete(StackType *S);
ItemType StackTop(StackType *S);
char EmptyStack(StackType *S);
char FullStack(StackType *S);
void PrintStack(StackType *S);

#endif