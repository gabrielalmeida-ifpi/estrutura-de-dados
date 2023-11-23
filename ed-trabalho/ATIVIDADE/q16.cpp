#include "lista.h"

int main() {
    Lista lista = NULL;

    lista = no(12, lista);
    lista = no(24, lista);
    lista = no(249, lista);
    lista = no(4, lista);

    int soma_elementos = soma(lista);
    printf("Soma dos elementos da lista: %d\n", soma_elementos);

    return 0;
}