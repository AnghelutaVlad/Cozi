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
struct c{
            int fin;
            int capacity;
            int* vector;
        };
typedef struct c CoadaVector;
CoadaLista* crearelista();
void pushLista(CoadaLista* q,int k);
int popLista(CoadaLista*q);
CoadaLista* umplerelista(int k);
int empty(CoadaLista*q);
void afisareLista(CoadaLista*q);
void stergerelista(CoadaLista**q);
CoadaVector* crearevector(int k);
int isFull(CoadaVector*v);
int isEmpty(CoadaVector*v);
void resize(CoadaVector*v);
void pushvector(CoadaVector*v,int k);
int popvector(CoadaVector*v);
CoadaVector* umplerevector(int k);
void afisareVector(CoadaVector*v);
void stergevector(CoadaVector**v);
