//
// Implementación de la definición de la clase Person.
//

#include <string>

using namespace std;

#include "Birthday.h"
#include "Person.h"
#include <iostream>

Person::Person(string name, Birthday birthday) : name(name),
                                                 birthday(birthday) {}

void Person::printInfo() {
    cout << Person::name << " <--- ";
    Person::birthday.printDate();
}
