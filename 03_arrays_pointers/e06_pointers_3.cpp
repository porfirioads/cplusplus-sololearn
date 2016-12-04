//
// Created by porfirio on 12/4/16.
//

#include <iostream>

using namespace std;

int main() {
    // & -> operador "Address-of"
    // * -> operador "Contents-of"
    int var = 50;
    int *p;
    p = &var;
    // Imprime variable
    cout << var << endl;
    // Imprime dirección de memoria
    cout << p << endl;
    // Imprime el valor de la variable localizada en esa posición de memoria
    cout << *p << endl;
    return 0;
}