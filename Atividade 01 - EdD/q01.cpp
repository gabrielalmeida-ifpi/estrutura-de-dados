#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

char frase[20];

int main()
{
    printf("Digite o valor:");
    scanf("%s", frase);
    int frase_len = 0;
    for (int contador = 0; contador < strlen(frase); contador++)
    {   
        frase_len++;
    }
    printf("O tamanho da frase é: %d\n", frase_len);
    return 0;
}
