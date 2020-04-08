#ifndef LISTCHILD_H_INCLUDED
#define LISTCHILD_H_INCLUDED
#include <iostream>
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define firstChild(L) L.firstChild

// Double Circular

using namespace std;

struct infoChild
{
    int idCustomer;
    string jenisBusana;
    string ukuranBusana;
    int jumlahBusana;
};

typedef struct elmlistChild *addressChild;

struct elmlistChild
{
    infoChild info;
    addressChild next;
    addressChild prev;
};

struct listChild
{
    addressChild firstChild;
};

void createListChild(listChild &L);
addressChild allocateChild(infochild x);
void insertFirstChild(listChild &L, addressChild P);
void insertAfterChild(listChild &L, addressChild prec, addressChild P);
void insertLastChild(listChild &L, addressChild P);
void deleteFirstChild(listChild &L, addressChild &P);
void deleteAfterChild(listChild &L, addressChild prec, addressChild &P);
void deleteLastChild(listChild &L, addressChild &P);
void printinfoChild(listChild L);
addressChild searchElmChild(listChild &L, int noCust);

#endif // LISTCHILD_H_INCLUDED
