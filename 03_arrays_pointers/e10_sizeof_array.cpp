//
// Created by porfirio on 12/4/16.
//

#include <iostream>

using namespace std;

int main() {
    int numbers[100];
    // Muestra el número de elementos del arreglo
    cout << sizeof(numbers) / sizeof(numbers[0]) << endl;
    return 0;
}