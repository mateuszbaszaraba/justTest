//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>

using namespace std;

char *producent(void);
char *w2;

int main() {
    char * w1 = new char;
    w2 = new char;

    char *w3 = nullptr;
    w3 = producent();

    char *w4 = producent();

    *w1 = 'h';
    *w2 = 'm';
    *w3 = 'i';
    cout << "Chars: " << *w1 << *w2 << *w3 << endl << "bin: " << *w4 << endl;

    delete w1;
    delete w2;
    delete w4;

    return 0;
}

char *producent(void)
{
    char local = 'M';

    char *wskaznik;
    cout << "in progress...";
    wskaznik = new char;
    return wskaznik;
}