//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>

using namespace std;

void multiply(int howMany, long t[]);
int main() {
    constexpr int size {8192};
    long vidmo[size];

    for(int i=0; i<size; i++)
    {
        vidmo[i] = i;
        if(i<6)
            cout << "vidmo[" << i << "]= " << vidmo[i] << endl;
    }

    multiply(size, vidmo+3);
    cout << "After multiply \n";
    for(int i = 0; i < 9; i++)
    {
        cout << "vidmo[" << i << "]= " << vidmo[i] << endl;
    }

    return 0;
}

void multiply(int howMany, long t[])
{
    for(int i = 0; i < howMany; i++)
        t[i] *= 2;
}