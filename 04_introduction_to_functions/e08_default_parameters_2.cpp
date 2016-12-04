//
// Programa que muestra el uso de una función donde todos sus parámetros
// tienen un valor por default, y los resultados de llamarla de diferentes
// maneras.
//

#include <iostream>

using namespace std;

int volume(int l = 2, int w = 3, int h = 4) {
    return l * w * h;
}

int main() {
    cout << volume() << endl;
    cout << volume(5) << endl;
    cout << volume(2, 3) << endl;
    cout << volume(3, 7, 6) << endl;
}