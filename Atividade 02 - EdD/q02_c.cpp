#include <iostream>

using namespace std;

main(){
char *a, *b;
a = "uva"; //Erro: Conversão Inválida de const char* pra char
b = "carro"; //Erro: Conversão Inválida de const char* pra char
if (&a==&b)
printf("são iguais");
else{
if (a < b)
printf ("%s vem antes de %s no dicionário", a, b);
else
printf ("%s vem depois de %s no dicionário", a, b);
}