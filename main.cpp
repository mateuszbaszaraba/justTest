//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>

using namespace std;

int main() {
    int num {32};
    int *pointer = &num;

    cout << *pointer << endl;

    num = 45;
    cout << num << " " << *pointer << endl;

    *pointer = 1;
    cout << num << " " << *pointer << endl;

    return 0;
}
