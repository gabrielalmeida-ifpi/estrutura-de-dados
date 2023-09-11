#include <iostream>

using namespace std;

void main() //Erro: Main tem que retornar int {
int x, *p;
x = 100;
p = x; //Erro: Conversão Inválida
printf("Valor de p: %d.n", *p);
}