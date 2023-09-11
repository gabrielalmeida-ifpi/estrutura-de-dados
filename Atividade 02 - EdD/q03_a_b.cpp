#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct no{
int item;
struct no *prox;
}No;

int main(){
No v[4]={{3,v+2},{4,NULL},{10,v+1}};

for (No *p=v;p!=NULL;p=p->prox){
cout<<p->item<<endl;
}

/*Imprime:
3
10
4
*/

No *n1=(No*)malloc(sizeof(No));
n1->item = 1;
n1->prox = NULL;

No *n2=(No*)malloc(sizeof(No));
n2->item = 4;
n2->prox = NULL;

n1->prox = n2;

for (No *p=n1;p!=NULL;p=p->prox){
cout<<p->item<<endl;
}
}