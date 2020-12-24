//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char tekst[] = { "what do you want to do" };
    char komunikat[120];

    strcpy(komunikat, tekst);
    cout << komunikat << endl;

    strncpy(komunikat, "123456789128j0d18", 9);
    cout << komunikat << endl;

    strcpy(komunikat, "nothinggg");
    cout << komunikat << endl;

    return 0;
}

