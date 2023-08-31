#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

char f1[10];
char f2[10];
int main(){
    cout << "Frase 1:";
    cin >> f1;
    cout << "Frase 2:";
    cin >> f2;
    bool iguais = true;
    for (int contador = 0; contador < strlen(f1); contador++) {
        if (f1[contador] != f2[contador]) {
            iguais = false; 
            break; 
        }
    }

    if (iguais == true){
        cout << "são iguais." << endl;
    }
    else {cout << "são diferentes!!" << endl;}
    
}