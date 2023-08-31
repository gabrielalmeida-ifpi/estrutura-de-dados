#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

char frase[20]={"uma frase"};
int main(){
     for (int contador = 0; contador < strlen(frase); contador++)
    {   
        cout << frase[contador] << endl;
    }
}