//
// Created by porfirio on 12/3/16.
//

#include <iostream>

using namespace std;

int main() {
    int age;
    cin >> age;
    switch (age) {
        case 16:
            cout << "Too young" << endl;
            break;
        case 40:
            cout << "Adult" << endl;
            break;
        case 70:
            cout << "Senior" << endl;
            break;
        default:
            cout << "Caso por default" << endl;
    }
    return 0;
}