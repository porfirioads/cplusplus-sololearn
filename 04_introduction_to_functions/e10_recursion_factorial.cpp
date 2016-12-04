//
// Programa que muestra el uso de la recursividad mostrando como ejemplo la
// función de factorial.
//

#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    cout << factorial(5) << endl;
}