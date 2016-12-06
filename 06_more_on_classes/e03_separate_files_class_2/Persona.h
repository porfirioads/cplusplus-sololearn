//
// Definición de la clase Persona.
//

#ifndef PERSONA_H
#define PERSONA_H

class Persona {
public:
    Persona(string nombre);

    void setNombre(string nombre);

    string getNombre();

private:
    string nombre;
};

#endif
