//
// Programa que muestra el operador de selección de miembro de flecha (->)
// para acceder a miebros de clases con un puntero.
//

#include <iostream>

using namespace std;

class MyClass {
public:
    MyClass();

    void myPrint();
};

MyClass::MyClass() {
}

void MyClass::myPrint() {
    cout << "Hello" << endl;
}

int main() {
    MyClass obj;
    MyClass *ptr = &obj;
    ptr->myPrint();
}