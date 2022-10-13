#ifndef ORDEREDLIST_H
#define ORDEREDLIST_H

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
} ListType;

void CreateList(ListType *L);
int Insert(ListType *L, ItemType I);
int Delete(ListType *L, KeyType K);
static int DeletePosition(ListType *L, PointerType P);
PointerType Search(ListType *L, KeyType K);
char EmptyList(ListType *L);

void PrintList(ListType *L);

#endif