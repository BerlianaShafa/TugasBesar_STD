#ifndef LISTRELASI_H_INCLUDED
#define LISTRELASI_H_INCLUDED
#include <iostream>
#define next(P) P->next
#define info(P) P->info
#define firstRelasi(L) L.firstRelasi

//Single linked list

using namespace std;

struct infoRelasi
{
    int idPenyewa;
    string alamatPenyewa;
    string namaPenyewa;
    int umurPenyewa;
};

typedef struct elmlistRelasi *addressRelasi;

struct elmlistRelasi
{
    infoRelasi info;
    addressRelasi next;
};

struct listRelasi
{
    addressRelasi firstRelasi;
};

void createListRelasi(listRelasi &L);
addressRelasi allocateRelasi(infoRelasi x);
void insertFirstRelasi(listRelasi &L, addressRelasi P);
void insertAfterRelasi(listRelasi &L, addressRelasi prec, addressRelasi P);
void insertLastRelasi(listRelasi &L, addressRelasi P);
void deleteFirstRelasi(listRelasi &L, addressRelasi &P);
void deleteAfterRelasi(listRelasi &L, addressRelasi prec, addressRelasi &P);
void deleteLastRelasi(listRelasi &L, addressRelasi &P);
void printinfoRelasi(listRelasi L);
addressRelasi searchElmRelasi(listRelasi &L, string ID);



#endif // LISTRELASI_H_INCLUDED
