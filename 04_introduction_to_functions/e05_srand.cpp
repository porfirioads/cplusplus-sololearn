//
// Programa que muestra el uso de la función srand() para generar números
// aleatorios.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    // El parámetro que le pasamos es el que determina la secuencia de
    // números que se van a generar, es decir, si le pasamos el mismo número,
    // generará la misma secuencia.
    srand(951);
    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 6) << endl;
    }
}