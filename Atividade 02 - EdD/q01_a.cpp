#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

int i=15,j,*p,*q;
p = &i;
*p=20;
j=2 * *p;
q=&i;
*p=*q-1;
q=&j;
*p=*q-1;

cout << p << endl; //0xe7cd3ffa4c
cout << *p << endl; //39
cout << j << endl; //40
cout << i << endl; //39 
cout << *q << endl; //40
}