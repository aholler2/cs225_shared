#include <iostream>
using namespace std;

int main(){
    int ** a = new int *[2];
    int b = 3;
    a[0] = &b;
    a[1] = new int;
    *(a[1]) = 5;
    int ** c = new int *;
    *c = new int;
    int *** d = &c;

    delete a[1];
    delete [] a;
    a = NULL;
    delete (*c);
    delete c;
    c = NULL;

    return 0;
}
