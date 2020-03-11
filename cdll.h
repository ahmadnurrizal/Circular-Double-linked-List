#ifndef CDLL_H_INCLUDED
#define CDLL_H_INCLUDED

#include <iostream>
#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
using namespace std;

typedef char infotype;
typedef struct elmtList *address;
struct elmtList {
    address next;
    address prev;
    infotype info;
};

struct list{
    address first;
};

bool isEmpty (list L);
void createList (list &L);
void createNewElmt (infotype X, address &P);
void insertFirst (list &L, address P);
void insertAfter (address prec, address P);
void deleteFirst (list &L, address &P);
void deleteAfter (address prec, address &P);
int countWord(string data, list L);
address searching(char X,list L);
void printInfo(list L);
#endif // CDLL_H_INCLUDED
