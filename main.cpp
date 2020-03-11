#include "cdll.h"

int main()
{
    list L;
    address P,prec;

    createList(L);

    printInfo(L);
    createNewElmt('a',P);
    insertFirst(L,P);
    printInfo(L);
    cout<<endl;
    createNewElmt('t',P);
    insertFirst(L,P);
    printInfo(L);
    cout<<endl;

    createNewElmt('t',P);
    prec=searching('a',L);
    insertAfter(prec,P);
    printInfo(L);
    cout<<endl;

    createNewElmt('c',P);
    prec=searching('t',L);
    insertAfter(prec,P);
    printInfo(L);
    cout<<endl;

    createNewElmt('a',P);
    prec=searching('t',L);
    insertAfter(prev(prec),P);
    printInfo(L);
    cout<<endl;

    createNewElmt('s',P);
    prec=searching('a',L);
    insertAfter(next(next(prec)),P);
    printInfo(L);
    cout<<endl;

    createNewElmt('c',P);
    prec=searching('s',L);
    insertAfter(prec,P);
    printInfo(L);
    cout<<endl;

    createNewElmt('a',P);
    prec=searching('c',L);
    insertAfter(prev(prev(prec)),P);
    printInfo(L);
    cout<<endl;
    cout<<"Jumlah kata cat : "<<countWord("cat",L);
    return 0;
}
