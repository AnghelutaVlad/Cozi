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

