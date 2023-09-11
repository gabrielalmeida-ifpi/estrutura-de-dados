#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int x, y, *p; y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;

    cout << x << endl;
    cout << y << endl;
    cout << *p << endl;
}



//x=3 y=4 *p=4;