#include "listParent.h"

void createListParent(listParent &L){
    firstParent(L) = NULL;
}

addressParent allocateParent(infoParent x){
    addressParent P = NULL;
  
    P = new elmlistParent;
    info(P).idPenyewa = x.idPenyewa;
    info(P).alamatPenyewa = x.alamatPenyewa;
    info(P).namaPenyewa = x.namaPenyewa;
    info(P).umurPenyewa = x.umurPenyewa;
    next(P) = NULL;
    prev(P) = NULL;

    return P;
}

void insertFirstParent(listParent &L, addressParent P){
    if(firstParent(L) == NULL){
        firstParent(L) = P;
        next(P) = P;
        prev(P) = P;
    } else {
        next(P) = firstParent(L);
        prev(P) = prev(firstParent(L));
        next(prev(firstParent(L))) = P;
        prev(firstParent(L)) = P;
        firstParent(L) = P;
    }
}

void insertAfterParent(listParent &L, addressParent prec, addressParent P){
    next(P)=next(prec);
    prev(next(P))=P;
    next(prec)=P;
    prev(next(prec))=prec;
}

void insertLastParent(listParent &L, addressParent P){
    if(firstParent(L) == NULL){
        insertFirstParent(L, P);
    } else {
        next(P) = firstParent(L);
        prev(P) = prev(firstParent(L));
        next(prev(firstParent(L))) = P;
        prev(firstParent(L)) = P;
    }
}

void deleteFirstParent(listParent &L, addressParent &P){

}

void deleteAfterParent(listParent &L, addressParent prec, addressParent &P){

}

void deleteLastParent(listParent &L, addressParent &P){

}

void printinfoParent(listParent L){

}

addressParent searchElmParent(listParent &L, string ID){

}