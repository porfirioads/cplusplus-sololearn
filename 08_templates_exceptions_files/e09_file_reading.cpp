//
// Programa que muestra cómo hacer lectura desde archivos.
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Abrir el archivo en modo escritura para introducirle datos
    ofstream MyFile1("test.txt");
    // Escribe datos en el archivo
    MyFile1 << "This is awesome! \n";
    // Se cierra el archivo
    MyFile1.close();
    // Variable donde almacenaremos las líneas leídas
    string line;
    // Abrir el archivo en modo lectura para extraer la información
    ifstream MyFile("test.txt");
    // Se lee el archivo mientras tenga más líneas
    while (getline(MyFile, line)) {
        cout << line << '\n';
    }
    // Se cierra el archivo
    MyFile.close();
}