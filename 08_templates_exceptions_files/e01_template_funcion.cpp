//
// Programa que muestra el uso de templates de función, para pasar parámetros
// y tener valores de retorno de distintos tipos.
//

#include <iostream>

using namespace std;

template<class T>
T sum(T a, T b) {
    return a + b;
}

int main() {
    int x = 7, y = 15;
    double a = 1.1, b = 2.3;
    cout << sum(x, y) << endl;
    cout << sum(a, b) << endl;
}