//
// Programa que muestra el uso de valores por default en los parámetros de
// las funciones.
//

#include <iostream>

using namespace std;

// El valor por default puede declararse para los últimos parámetros.
int sum(int a, int b = 42) {
    int result = a + b;
    return (result);
}

// Si queremos que el primer parámetro tenga un valor por default, debemos
// establecerlo también para los demás
int rest(int a = 100, int b = 2) {
    return a - b;
}

int main() {
    int x = 10;
    int y = 20;
    // Calling the function with both parameters
    int result = sum(x, y);
    cout << result << endl;
    // Calling the function without b
    result = sum(x);
    cout << result << endl;
    // Manda llamar a la otra función con ambos parámetros
    result = rest(10, 4);
    cout << result << endl;
    result = rest(10);
    cout << result << endl;
    return 0;
}