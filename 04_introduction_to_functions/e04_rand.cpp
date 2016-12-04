//
// Programa que muestra el uso de la función rand() de la librería cstdlib para
// generar números aleatorios.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    // Generación de números aleatorios
    for (int x = 1; x <= 10; x++) {
        cout << rand() << endl;
    }
    // Números aleatorios entre 1 y 6
    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 6) << endl;
    }
}