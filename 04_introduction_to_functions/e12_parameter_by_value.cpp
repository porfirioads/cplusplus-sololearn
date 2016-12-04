//
// Programa que muestra el paso por parámetros por valor (la forma por
// default en c++)
//

#include <iostream>

using namespace std;

void myFunc(int x) {
    x = 100;
}

int main() {
    int var = 20;
    cout << "before: " << var << endl;
    myFunc(var);
    cout << "after: " << var << endl;
}