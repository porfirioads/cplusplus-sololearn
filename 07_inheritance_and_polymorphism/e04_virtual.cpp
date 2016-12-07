//
// Programa que muestra la aplicación real de polimorfismo por medio de
// funciones virtuales.
//

#include <iostream>

using namespace std;

// Clase base, al declarar métodos virtuales, es llamada clase polimórfica.
class Enemy {
public:
    // Es el método que sobreescribirán las subclases de la clase.
    virtual void attack() {
        // También puede tener implementación este método.
    }
};

// Subclase de Enemy que representa a un Ninja.
class Ninja : public Enemy {
public:
    void attack() {
        cout << "Ninja!" << endl;
    }
};

// Subclase de Enemy que representa un Monster.
class Monster : public Enemy {
public:
    void attack() {
        cout << "Monster!" << endl;
    }
};

int main() {
    // Se crean objetos de las subclases.
    Ninja n;
    Monster m;
    // Se usan punteros para que objetos de diferentes clases que provienen
    // del mismo padre puedan ser usados como objetos de la clase padre.
    Enemy *e1 = &n;
    Enemy *e2 = &m;
    // Se manda llamar al método attack del padre, pero al ser un método
    // virtual, cada subclase tiene su propia implementación.
    e1->attack();
    e2->attack();
}