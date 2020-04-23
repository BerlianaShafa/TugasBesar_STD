#include "listRelasi.h"

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


