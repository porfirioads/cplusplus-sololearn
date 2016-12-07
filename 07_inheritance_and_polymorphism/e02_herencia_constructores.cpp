//
// Programa que muestra cómo aunque las clases derivadas no heredan los
// constructores, aún así, los constructores y destructores de su padre son
// invocados.
//

#include <iostream>

using namespace std;

class Mother {
public:
    Mother() {
        cout << "Mother ctor" << endl;
    }

    ~Mother() {
        cout << "Mother dtor" << endl;
    }
};

class Daughter : public Mother {
public:
    Daughter() {
        cout << "Daughter ctor" << endl;
    }

    ~Daughter() {
        cout << "Daughter dtor" << endl;
    }
};

int main() {
    Daughter m;
}