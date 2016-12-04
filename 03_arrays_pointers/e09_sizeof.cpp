//
// Created by porfirio on 12/4/16.
//

#include <iostream>

using namespace std;

int main() {
    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    int var = 50;
    cout << "var: " << sizeof(var) << endl;
    return 0;
}