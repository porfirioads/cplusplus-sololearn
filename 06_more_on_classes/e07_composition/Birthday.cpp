//
// Implementación de la definición de la clase Birthday.
//

#include <iostream>
#include "Birthday.h"

using namespace std;

Birthday::Birthday(int day, int month, int year) : day(day), month(month),
                                                   year(year) {}

void Birthday::printDate() {
    cout << day << "/" << month << "/" << year << endl;
}

