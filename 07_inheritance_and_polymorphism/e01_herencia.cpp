//
// Programa que muestra el uso de la herencia simple entre clases.
//

#include <iostream>

using namespace std;

class Mother {
public:
    Mother() {};

    void sayHi() {
        cout << "Hi" << endl;
    }
};

class Daughter : public Mother {
public:
    Daughter() {};

    void sayBye() {
        cout << "Bye" << endl;
    }
};

int main() {
    Daughter d;
    d.sayHi();
    d.sayBye();
}