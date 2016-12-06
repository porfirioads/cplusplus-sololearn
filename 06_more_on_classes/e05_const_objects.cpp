//
// Programa que muestra la definición y uso de métodos constantes que pueden
// ser usados por objetos constantes. Definir objetos y funciones constantes
// asegura que los atributos de la clase no sean modificados inesperadamente.
//

#include <iostream>

using namespace std;

class MyClass {
public:
    void myPrint() const;
};

void MyClass::myPrint() const {
    cout << "Hello" << endl;
}

int main() {
    const MyClass obj;
    obj.myPrint();
}