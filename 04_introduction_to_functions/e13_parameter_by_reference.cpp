//
// Created by porfirio on 12/4/16.
//

#include <iostream>

using namespace std;

void myFunc(int *x) {
    *x = 100; // Ya podemos modificar el valor de la variable original
}

int main() {
    int var = 20;
    cout << "before: " << var << endl;
    myFunc(&var); // Le pasamos la dirección de memoria de la variable
    cout << "after: " << var << endl;
}