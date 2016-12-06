//
// Definición de la clase Person.
//

#ifndef CPLUSPLUS_SOLOLEARN_PERSON_H
#define CPLUSPLUS_SOLOLEARN_PERSON_H

class Person {
public:
    Person(string name, Birthday birthday);

    void printInfo();

private:
    string name;
    Birthday birthday;
};

#endif //CPLUSPLUS_SOLOLEARN_PERSON_H
