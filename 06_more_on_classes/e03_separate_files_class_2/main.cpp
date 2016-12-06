//
// Programa que prueba la clase Persona.
//

#include <iostream>

using namespace std;

#include "Persona.h"

int main() {
    Persona porfirio("Porfirio");
    porfirio.setNombre("Porfirio Ángel");
    cout << porfirio.getNombre() << endl;
    return 0;
}