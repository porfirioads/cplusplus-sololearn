//
// Programa que muestra las formas de acceder a los miembros de la clase por
// miedo del puntero this.
//

#include <iostream>

using namespace std;

class MyClass {
public:
    MyClass(int a) : var(a) {}

    void printInfo() {
        cout << var << endl;
        cout << this->var << endl;
        cout << (*this).var << endl;
    }

private:
    int var;
};

int main() {
    MyClass obj(42);
    obj.printInfo();
}