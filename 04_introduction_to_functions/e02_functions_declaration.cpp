//
// Programa que muestra la declaración de funciones para poder poner su
// implementación en la parte del código que queramos.
//

#include <iostream>

using namespace std;

//Function declaration
void printSomething();

int main() {
    printSomething();
}

//Function definition
void printSomething() {
    cout << "Hi there!" << endl;
}