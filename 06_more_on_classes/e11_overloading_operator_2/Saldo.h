//
// Definición de la clase Saldo.
//

#ifndef CPLUSPLUS_SOLOLEARN_SALDO_H
#define CPLUSPLUS_SOLOLEARN_SALDO_H

class Saldo {
public:
    // Constructor que recibe el saldo parcial y la deuda.
    Saldo(int saldoParcial, int deuda);

    // Sobrescritura del operador +.
    Saldo operator+(Saldo &otro);

    // Agrega dinero al saldo que se tiene.
    void agregarDineroSaldo(int dinero);

    // Abona dinero a la deuda que se tiene.
    void abonarDineroDeuda(int dinero);

    // Agrega dinero a la deuda (aumentar deuda).
    void agregarDineroDeuda(int dinero);

    // Obtiene el saldo parcial.
    int getSaldoParcial();

    // Obtiene la deuda.
    int getDeuda();

    // Obtiene el saldo real, resultado de restarle la deuda al saldo parcial.
    int getSaldoTotal();

    // Imprime el estado del saldo y deuda.
    void printStatusSaldo();

private:
    // Dinero que se tiene
    int saldoParcial;
    // Dinero que se debe
    int deuda;
};

#endif //CPLUSPLUS_SOLOLEARN_SALDO_H
