#ifndef LISTRELASI_H_INCLUDED
#define LISTRELASI_H_INCLUDED
#include "listChild.h"
#include "listParent.h"
#include <iostream>

#define next(P) P->next
#define next(prec) prec->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last
#define child(P) P->child
#define parent(P) P->parent

//Single linked list

using namespace std;

typedef struct elmlistRelasi *addressRelasi;

struct elmlistRelasi
{
    addressRelasi next;
    addressRelasi prev;
    addressChild child;
    addressParent parent;
};

struct listRelasi
{
    addressRelasi first;
    addressRelasi last;
};

void createList(listRelasi &L);
addressRelasi allocateRelasi(addressParent parent, addressChild child);
void deallocateRelasi(addressRelasi &P);
void insertFirst(listRelasi &L, addressRelasi P);
void insertAfter(listRelasi &L, addressRelasi prec, addressRelasi P);
void insertLast(listRelasi &L, addressRelasi P);
void deleteFirst(listRelasi &L, addressRelasi &P);
void deleteAfter(listRelasi &L, addressRelasi prec, addressRelasi &P);
void deleteLast(listRelasi &L, addressRelasi &P);
void printinfo(listRelasi L);
addressRelasi searchElm(listRelasi &L, addressParent parent, addressChild child);



#endif // LISTRELASI_H_INCLUDED
