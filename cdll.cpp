#include "cdll.h"

bool isEmpty (list L){
    if (first(L)==NULL) {
        return true;
    } else {
        return false;
    }
}
void createList (list &L){
    first(L)=NULL;
}

void createNewElmt (infotype X, address &P){
    P=new elmtList;
    info(P)=X;
    next(P)=NULL;
    prev(P)=NULL;
}

void insertFirst (list &L, address P){
    if (first(L)==NULL) {
        first(L)=P;
        next(P)=P;
        prev(P)=P;
    } else {
        next(prev(first(L)))=P;
        prev(P)=prev(first(L));
        next(P)=first(L);
        prev(first(L))=P;
        first(L)=P;
    }
}

address searching(char X, list L){
    address prec=first(L);
    if (info(first(L))==X) {
        return prec;
    } else {
        prec=next(prec);
        while (prec!=first(L) && info(prec)!=X){
            prec=next(prec);
        }
        return prec;
    }
}
void insertAfter (address prec, address P){
    next(P)=next(prec);
    prev(next(prec))=P;
    next(prec)=P;
    prev(P)=prec;
}

void deleteFirst (list &L, address &P){
    if (next(first(L))==first(L)) {
        next(first(L))=NULL;
        prev(first(L))=NULL;
        first(L)=NULL;
    } else {
        P=first(L);
        next(prev(first(L)))=next(first(L));
        prev(next(P))=prev(P);
        first(L)=next(P);
        next(P)=NULL;
    }
}
void deleteAfter (address prec, address &P){
    P=next(prec);
    next(prec)=next(P);
    prev(next(P))=prec;
    next(P)=NULL;
    prev(P)=NULL;
}
int countWord(string data, list L){
    address Q=first(L);
    int count=0;
    if (info(Q)==data[0]&&info(next(Q))==data[1]&&info(next(next(Q)))==data[2]) {
        count++;
    }
    Q=next(Q);
    while (Q!=first(L)){
        if (info(Q)==data[0]&&info(next(Q))==data[1]&&info(next(next(Q)))==data[2]) {
            count++;
        }
        Q=next(Q);
    }
    return count;
}

void printInfo(list L){
    if (first(L)==NULL) {
        cout<<"List Kosong"<<endl;
    } else {
        address Q=first(L);
        cout<<info(Q)<<" ";
        Q=next(Q);
        while (Q!=first(L)){
            cout<<info(Q)<<" ";
            Q=next(Q);
        }
    }
}
