#include"Cozi.h"
CoadaLista* crearelista()
{
    CoadaLista* q=(CoadaLista*)malloc(sizeof(CoadaLista));
    q->front=q->rear=NULL;
    return q;
}
void pushLista(CoadaLista* q,int k)
{
    Nod* v=(Nod*)malloc(sizeof(Nod));
    v->val=k;
    v->next=NULL;
    if(q->rear==NULL)
    {
        q->rear=v;
    }
    else
    {
        (q->rear)->next=v;
        (q->rear)=v;
    }
    if(q->front==NULL)
        q->front=q->rear;
    return;
}
int popLista(CoadaLista*q)
{
    Nod *v=q->front;
    int n=v->val;
    q->front=(q->front)->next;
    free(v);
    return n;
}
CoadaLista* umplerelista(int k)
{
    int n;
    CoadaLista *q=crearelista();
    for(int i=0;i<k;i++)
    {
        scanf("%d",&n);
        pushLista(q,n);
    }
    return q;
}
int empty(CoadaLista*q)
{
    return q->front==NULL;
}
void afisareLista(CoadaLista*q)
{
    if(q==NULL)
    {
        printf("Lisat este goala");
        return;
    }
    while(!empty(q))
    {
        printf("%d ",popLista(q));
    }
    return;
}
void stergerelista(CoadaLista**q)
{
    while(!empty(*q))
    {
        Nod *v=(*q)->front;
        (*q)->front=((*q)->front)->next;
        free(v);
    }
    free(*q);
    (*q)=NULL;
    return;
}
CoadaVector* crearevector(int k)
{
    CoadaVector* v=(CoadaVector*)malloc(sizeof(CoadaVector));
    v->fin=-1;
    v->capacity=k;
    v->vector=(int*)malloc((v->capacity)*sizeof(int));
    return v;
}
int isFull(CoadaVector*v)
{
    return v->fin==v->capacity-1;
}
int isEmpty(CoadaVector*v)
{
    return v->fin==-1;
}
void resize(CoadaVector*v)
{
    v->capacity*=2;
    v->vector=(int*)realloc(v->vector,(v->capacity)*sizeof(int));
}
void pushvector(CoadaVector*v,int k)
{
    if(isFull(v))
        resize(v);
    v->vector[++(v->fin)]=k;
    return;
}
int popvector(CoadaVector*v)
{
    int n=v->vector[0];
    for(int i=0;i<v->fin;i++)
        v->vector[i]=v->vector[i+1];
    v->fin--;
    return n;
}
CoadaVector* umplerevector(int k)
{
    CoadaVector*v=crearevector(k);
    int n;
    for(int i=0;i<k;i++)
    {
        scanf("%d",&n);
        pushvector(v,n);
    }
    return v;
}
void afisareVector(CoadaVector*v)
{
    if(v==NULL)
    {
        printf("coada goala");
        return;
    }
    while(!isEmpty(v))
    {
        printf("%d ",popvector(v));
    }
    return;
}
void stergevector(CoadaVector**v)
{
    free((*v)->vector);
    free(*v);
    (*v)=NULL;
}
