#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No {
public:
    char nome;
    No *prox;
    
    No(char n) {
        nome = n;
        prox = NULL;
    }
};

class Pilha {
public:
    No *topo;

    Pilha() {
        topo = NULL;
    }

    void push(char n) {
        No *novoNo = new No(n);
        novoNo->prox = topo;
        topo = novoNo;
    }

    char pop() {
        if (topo == NULL) {
            return 0;
        }
        char valor = topo->nome;
        No *temp = topo;
        topo = topo->prox;
        delete temp;
        return valor;
    }

    int isEmpty() {
        return (topo == NULL);
    }

    void desempilha() {
        while (!isEmpty()) {
            cout << pop() << " ";
        }
        cout << endl;
    }
};

int main() {
    Pilha minhaPilha;
    
    minhaPilha.push('A');
    minhaPilha.push('B');
    minhaPilha.push('C');
    
    cout << "Elementos desempilhados: ";
    minhaPilha.desempilha();

    return 0;
}

