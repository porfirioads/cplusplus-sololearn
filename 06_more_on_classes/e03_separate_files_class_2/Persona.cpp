//
// Implementación de la definición de la clase Persona.
//

#include <string>

// Debemos colocarlo antes de hacer el include con Persona.h, ya que este
// archivo utiliza string en la definición de la clase
using std::string;

#include "Persona.h"

Persona::Persona(string nombre) {
    Persona::nombre = nombre;
}

void Persona::setNombre(string nombre) {
    Persona::nombre = nombre;
}

string Persona::getNombre() {
    return nombre;
}