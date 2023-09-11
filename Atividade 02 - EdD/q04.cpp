#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;

typedef struct pessoa{
int cpf;
string nome;
struct pessoa *prox;
}Pessoa;

int main(){
Pessoa *p1 = new Pessoa();
p1->cpf = 111;
p1->nome = "Fabio";
p1->prox = NULL;

Pessoa *p2 = new Pessoa();
p2->cpf = 2222;
p2->nome = "Katia";
p2->prox = NULL;    

Pessoa *p3 = new Pessoa();
p3->cpf = 4444;
p3->nome = "Jonatas";
p3->prox = NULL;

p3->prox = p1;
p1->prox = p2;

for (Pessoa *p=p3;p!=NULL;p=p->prox){
cout << "CPF: " << p->cpf << ", Nome: " << p->nome << endl;
}
}