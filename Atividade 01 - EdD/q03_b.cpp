#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

string f1;
string f2;
int main(){
    cout << "Frase 1:";
    cin >> f1;
    cout << "Frase 2:";
    cin >> f2;
    bool iguais = true;
    for (int contador = 0; contador < f1.length(); contador++) {
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