//
// Programa que muestra el uso de clases abstractas por medio de definir
// métodos virtuales puros (sin cuerpo), los cuales obligatoriamente deben
// ser sobrescritos en las subclases, además, la clase base que contiene los
// métodos virtuales puros, no puede ser instanciada.
//

#include <iostream>

using namespace std;

class Enemy {
public:
    // Al definir que el método virtual no tiene cuerpo, obligamos a las
    // subclases a implementarlo, y esta clase no podrá ser instanciada.
    virtual void attack() = 0;
};

class Ninja : public Enemy {
public:
    void attack() {
        cout << "Ninja!" << endl;
    }
};

class Monster : public Enemy {
public:
    void attack() {
        cout << "Monster!" << endl;
    }
};


int main() {
    Ninja n;
    Monster m;
    Enemy *e1 = &n;
    Enemy *e2 = &m;
    e1->attack();
    e2->attack();
    return 0;
}