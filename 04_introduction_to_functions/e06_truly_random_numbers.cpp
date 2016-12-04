//
// Programa que muestra el uso de la función srand() en conjunto con la
// función time() para generar números aleatorios que cambien en cada
// ejecución del programa.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // time(0) devuelve el tiempo del sistema en segundos.
    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 6) << endl;
    }
}