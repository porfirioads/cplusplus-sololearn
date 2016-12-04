//
// Created by porfirio on 12/4/16.
//

#include <iostream>

using namespace std;

int main() {
    // Declaración de variable
    int score = 5;
    // Declaración de puntero
    int *scorePtr;
    // Asignamos al puntero scorePtr la dirección donde está alojada la
    // variable score
    scorePtr = &score;
    // Imprimimos el puntero
    cout << scorePtr << endl;
    return 0;
}