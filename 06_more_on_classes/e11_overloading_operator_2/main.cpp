//
// Programa que prueba el funcionamiento de la clase Saldo, el cual tiene
// sobrecargado el operador +.
//

#include <iostream>
#include "Saldo.h"

using namespace std;

int main() {
    Saldo saldoPorfirio(1000, 400);
    Saldo saldoHayde(500, 300);
    Saldo saldoJuntos = saldoPorfirio + saldoHayde;
    cout << "Porfirio" << endl;
    saldoPorfirio.printStatusSaldo();
    cout << "Haydé" << endl;
    saldoHayde.printStatusSaldo();
    cout << "Juntos" << endl;
    saldoJuntos.printStatusSaldo();
    return 0;
}