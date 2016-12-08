//
// Programa que muestra cómo escribir en archivos.
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream MyFile;
    MyFile.open("test.txt"); // Abre el archivo
    MyFile << "Some text! \n"; // Escribe datos en el archivo
    MyFile.close(); // Cierra el archivo
}