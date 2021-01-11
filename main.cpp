//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>

using namespace std;
void sArr(const char tab[]);
void sPointer(const char *p);
int main() {

    char warning[80] = {"Error number 312"};
    cout << "*Arr*" << endl;
    sArr(warning);
    cout << endl << "*Pointer*" << endl;
    sPointer(warning);

    return 0;
}

void sArr(const char arr[]) {
    int n = 0;
    while(arr[n])
    {
        cout << arr[n++] << "-";
    }
}

void sPointer(const char *p) {
    while(*p)
    {
        cout << *(p++) << "-";
    }
}