#ifndef CONTACTLIST_H
#define CONTACTLIST_H

typedef char[10] NameType;
typedef int[9] PhoneType;

typedef struct
{
	NameType name;
    PhoneType phone;
} ContactType;

typedef struct NodeType *PointerType;

typedef struct NodeType
{
    ContactType contact;
    struct NodeType *next;   
} NodeType;

typedef struct
{
	PointerType first, last;
} ListType;

void CreateList(ListType *L);
int Insert(ListType *L, ContactType I);
int Delete(ListType *L, NameType N);
static int DeletePosition(ListType *L, PointerType P);
PointerType Search(ListType *L, NameType N);
char EmptyList(ListType *L);
void PrintList(ListType *L);

#endif