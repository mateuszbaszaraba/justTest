//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int *pi;
    double *pd;

    int arrint[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    double arrdbl[10];

    pd = &arrdbl[0];

    for(int i=0; i<10; ++i)
    {
        *(pd++) = i/10.0;
    }

    cout << "Start: " << endl;

    pi = arrint;
    pd = arrdbl;

    for(int i=0; i<10; ++i)
    {
        cout << i << ") \t" << *pi << "\t\t" << *pd << endl;
        pd++;
        pi++;
    }

    pi = &arrint[4];
    pd = arrdbl + 2;

    for(int i=0; i<3; ++i)
    {
        *(pi++) = -222;
        *(pd++) = 333.3;
    }

    cout << "Afterlife:" << endl;

    pi = arrint;
    pd = arrdbl;

    for(int i=0; i<10; ++i)
    {
        cout << "arrint[" << i << "] = " << setw(4) << *(pi++) << "\t\tarrdbl[" << i << "] = " << setw(5) << *(pd++) << endl;
    }

    return 0;
}
