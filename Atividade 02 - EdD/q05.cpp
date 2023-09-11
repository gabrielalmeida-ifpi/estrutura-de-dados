#include <stdio.h>
#include <iostream>
using namespace std;
typedef struct aluno
{
    int mat;
    string nome;
    aluno *prox;
} Aluno;
Aluno *no(int mat, string nome)
{
    Aluno *novo = new Aluno();
    novo->mat = mat;
    novo->nome = nome;
    novo->prox = NULL;
    return novo;
}
Aluno *inicio = NULL;
Aluno *fim = NULL;
void incluirNoFinal(Aluno *n)
{
    if (inicio == NULL)
    {
        inicio = n;
        fim = n;
    }
    else
    {
        fim->prox = n;
        fim = n;
    }
}
// inclui o elemento no inicio da lista
void incluirNoInicio(Aluno *n)
{
    if (inicio == NULL)
    {
        inicio = n;
        fim = n;
    }
    else
    {
        n->prox = inicio;
        inicio = n;
    }
}

// retorna o elemento se encontrado
// senao encontrado retorna NULL
Aluno *procura(int mat)
{
    Aluno *atual = inicio;
    while (atual != NULL)
    {
        if (atual->mat == mat)
        {
            return atual;
        }
        atual = atual->prox;
    }
    return NULL;
}
// mostra TODOS os elementos da lista
void mostra()
{
    Aluno *atual = inicio;
    while (atual != NULL)
    {
        cout << "Matricula: " << atual->mat << ", Nome: " << atual->nome << endl;
        atual = atual->prox;
    }
}

main(){
    Aluno *novo = no(1, "maria");
    incluirNoFinal(novo);

    novo = no(2, "katia");
    incluirNoFinal(novo);
    mostra();
}