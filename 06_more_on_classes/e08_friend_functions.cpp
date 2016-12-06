//
// Programa que muestra el uso de las funciones friend, para acceder a los
// atributos privados de una clase.
//

#include <iostream>

using namespace std;

class MyClass {
public:
    MyClass() {
        regVar = 0;
    };
private:
    int regVar;

    friend void someFunc(MyClass &obj);
};

void someFunc(MyClass &obj) {
    obj.regVar = 42;
    cout << obj.regVar << endl;
}

int main() {
    MyClass obj;
    someFunc(obj);
}
