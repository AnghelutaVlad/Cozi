#include"Cozi.h"
int main()
{
    int k,a;
    scanf("%d",&k);
    CoadaVector*q;
    q=umplerevector(k);
    scanf("%d",&a);
    pushVector(q,a);
    afisareVector(q);
}
