//
// Programa donde se muestra la encapsulación de los atributos de una clase.
//

#include <iostream>
#include <string>

using namespace std;

class Persona {
public:
    void setName(string x) {
        name = x;
    }

    string getName() {
        return name;
    }

private:
    string name;
};

int main() {
    Persona juan;
    juan.setName("John");
    cout << juan.getName() << endl;
    return 0;
}