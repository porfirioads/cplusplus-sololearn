//
// Created by porfirio on 12/4/16.
//

#include <iostream>

using namespace std;

int main() {
    int a[5] = {1, 20, 300, 4000, 50000};
    int b[] = {10, 9, 8, 7, 6};
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " <-> " << b[i] << endl;
    }
    return 0;
}