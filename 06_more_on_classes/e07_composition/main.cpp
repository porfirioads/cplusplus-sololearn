//
// Programa que prueba las clases Person y Birthday.
//

#include "Birthday.h"
#include <string>

using namespace std;

#include "Person.h"

int main() {
    Birthday birthday(20, 7, 1996);
    Person porfirio("Porfirio Ángel", birthday);
    porfirio.printInfo();
    return 0;
}