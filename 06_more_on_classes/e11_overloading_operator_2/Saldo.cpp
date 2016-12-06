//
// Implementación de la clase Saldo.
//

#include <iostream>
#include "Saldo.h"

using namespace std;

Saldo::Saldo(int saldoParcial, int deuda) : saldoParcial(saldoParcial), deuda
        (deuda) {}

void Saldo::abonarDineroDeuda(int dinero) {
    deuda -= dinero;
}

void Saldo::agregarDineroDeuda(int dinero) {
    deuda += dinero;
}

void Saldo::agregarDineroSaldo(int dinero) {
    saldoParcial += dinero;
}

int Saldo::getDeuda() {
    return deuda;
}

int Saldo::getSaldoParcial() {
    return saldoParcial;
}

int Saldo::getSaldoTotal() {
    return saldoParcial - deuda;
}

Saldo Saldo::operator+(Saldo &otro) {
    Saldo nuevoSaldo(0, 0);
    nuevoSaldo.saldoParcial = saldoParcial + otro.saldoParcial;
    nuevoSaldo.deuda = deuda + otro.deuda;
    return nuevoSaldo;
}

void Saldo::printStatusSaldo() {
    cout << "  Saldo parcial: " << saldoParcial << endl;
    cout << "  Deuda: " << deuda << endl;
    cout << "  Saldo total: " << getSaldoTotal() << endl;
}