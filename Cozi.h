#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct date{
               int val;
               struct date* next;
           };
typedef struct date Nod;
struct coada{
               Nod* front;
               Nod* rear;
            };
typedef struct coada CoadaLista;
CoadaLista* crearelista();
void pushLista(CoadaLista* q,int k);
int popLista(CoadaLista*q);
CoadaLista* umplerelista(int k);
int empty(CoadaLista*q);
void afisareLista(CoadaLista*q);
void stergerelista(CoadaLista**q);
