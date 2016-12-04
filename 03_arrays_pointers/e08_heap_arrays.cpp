//
// Created by porfirio on 12/4/16.
//

#include <iostream>

using namespace std;

int main() {
    int m = 10;
    int *p = NULL; // Pointer initialized with null
    p = new int[10]; // Request memory
    for (int i = 0; i < m; i++) {
        p[i] = (i + 1) * 3;
    }
    for (int i = 0; i < m; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
    delete[] p; // Delete array pointed to by p
    p = NULL; // Esto me lo encontré en stackoverflow porque los valores seguían
    // apareciendo en el for de abajo
    for (int i = 0; i < m; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
    return 0;
}