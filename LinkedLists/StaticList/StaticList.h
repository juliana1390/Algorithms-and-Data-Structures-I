#ifndef STATICLIST_H
#define STATICLIST_H

#define MAXSIZE 1000

#define NO_ERROR 0
#define INVALID_POS -1
#define NOT_FOUND -2
#define FULL_LIST -3

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
} ListType;

void CreateList(ListType *L);
int Insert(ListType *L, ItemType I);
int Remove(ListType *L, KeyType K);
static int RemovePosition(ListType *L, PointerType P);
PointerType Search(ListType *L, KeyType K);
char EmptyList(ListType *L);
char FullList(ListType *L);
void PrintList(ListType *L);

#endif
