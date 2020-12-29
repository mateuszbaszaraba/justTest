//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>

using namespace std;

int main() {
    int arri[6];
    double arrd[6];

    int *pi;
    double *pd;

    pi = &arri[0]; // pi = arri;
    pd = arrd;

    for(int i=0; i<6; ++i, ++pi, ++pd)
    {
        cout << "i = " << i
        << ") pi = "
        << reinterpret_cast<unsigned long>(pi)
        << ", pd = "
        << reinterpret_cast<unsigned long>(pd) << endl;
    }

    return 0;
}
