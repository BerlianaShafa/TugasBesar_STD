#include "listChild.h"

void createListChild(listChild &L){
    firstChild(L) = NULL;
}

addressChild allocateChild(infoChild x){
    addressChild P = NULL;

    P = new elmlistChild;
    info(P).idCustomer = x.idCustomer;
    info(P).jenisBusana = x.jenisBusana;
    info(P).ukuranBusana = x.ukuranBusana;
    info(P).jumlahBusana = x.jumlahBusana;
    next(P)=NULL;
    prev(P)=NULL;

    return P;
}

void insertFirstChild(listChild &L, addressChild P){
    if(firstChild(L) == NULL){
        firstChild(L) = P;
        next(P) = P;
        prev(P) = P;
    } else {
        next(P) = firstChild(L);
        prev(P) = prev(firstChild(L));
        next(prev(firstChild(L))) = P;
        prev(firstChild(L)) = P;
        firstChild(L) = P;
    }
}

void insertAfterChild(listChild &L, addressChild prec, addressChild P){
    next(P)=next(prec);
    prev(next(P))=P;
    next(prec)=P;
    prev(next(prec))=prec;
}

void insertLastChild(listChild &L, addressChild P){
    if(firstChild(L) == NULL){
        insertFirstChild(L, P);
    } else {
        next(P) = firstChild(L);
        prev(P) = prev(firstChild(L));
        next(prev(firstChild(L))) = P;
        prev(firstChild(L)) = P;
    }
}

void deleteFirstChild(listChild &L, addressChild &P){

}

void deleteAfterChild(listChild &L, addressChild prec, addressChild &P){
    P = next(prec);
    if(next(prec) == first(L)){
        deleteLast(L, P);
    } else if (next(prec) == prec){
        next(P) = NULL;
        prev(P) = NULL;
        next(prec) = prec;
        prev(prec) = prec;
    } else {
        next(prec) = next(P);
        prev(next(P)) = prec;
        next(P) = NULL;
        prev(P) = NULL;
    }
}

void deleteLastChild(listChild &L, addressChild &P){

}

void printinfoChild(listChild L){

}

addressChild searchElmChild(listChild &L, int noCust){
    addressChild P = NULL;

    while(next(P)!=firstChild(L) && info(P).idCustomer!=noCust.idCustomer){
        P=next(P);
    }
 
    return P;
}







