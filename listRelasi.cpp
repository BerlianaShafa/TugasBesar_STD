#include "listRelasi.h"

void createList(listRelasi &L){
    first(L) = NULL;
}

addressRelasi allocateRelasi(addressParent parent, addressChild child){
    addressParent P = NULL;
    
    P = new elmlistRelasi;
    ....
    ....
    next(P) = NULL;
    
    return P;
}

void deallocateRelasi(addressRelasi &P){
    delete P;
}

void insertFirst(listRelasi &L, addressRelasi P){
    next(P) = first(L);
    first(L) = P;
}

void insertAfter(listRelasi &L, addressRelasi prec, addressRelasi P){
    next(P) = next(prec);
    next(prec) = P;
}

void insertLast(listRelasi &L, addressRelasi P){
    addressRelasi prec = first(L);
    while(next(prec) != NULL){
        prec = next(prec);
    }
    next(prec) = P;
}

void deleteFirst(listRelasi &L, addressRelasi &P){
    if(first(L) != NULL){
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}

void deleteAfter(listRelasi &L, addressRelasi prec, addressRelasi &P){
    P = next(prec);
    next(prec) = next(P);
    next(P) = NULL;
}

void deleteLast(listRelasi &L, addressRelasi &P){
    addressRelasi prec;
    
    prec = first(L);
    if(next(prec) == NULL){
        first(L) = NULL;
    } else {
        while(next(next(prec)) != NULL){
            prec = next(prec);
        }
        P = next(prec);
        next(prec) = NULL;
    }
}

void printinfo(listRelasi L){
    addressRelasi P = first(L);
    cout<<"Output: ";
    while(P != NULL){
        cout<<....(P)<<", ";
        P = next(P);
    }
    
    cout<<endl;
}

addressRelasi searchElm(listRelasi &L, addressParent parent, addressChild child){
    addressRelasi P;
    
    P = first(L);
    while((P != NULL) && (.... != ....(P))){
        P = next(P);
    }
    
    return P;
}

