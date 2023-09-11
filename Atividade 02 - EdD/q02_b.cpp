#include <iostream>

using namespace std;

void troca (int *i, int *j) {
int *temp;
*temp = *i;
*i = *j;
*j = *temp;
}

//Erro: temp é utilizado sem ser inicializado