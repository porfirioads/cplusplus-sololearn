//
// Programa que utiliza la función is_open para determinar si existen los
// permisos de lectura y escritura en el archivo.
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream MyFile("test.txt");
    if (MyFile.is_open()) {
        MyFile << "This is awesome! \n";
    } else {
        cout << "Something went wrong" << endl;
    }
    MyFile.close();
}