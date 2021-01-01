//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>

using namespace std;

int main() {

    int size;

    cout << "Size: ";
    cin >> size;

    auto *arr = new int[size][5];   // int (*arr)[5] = new int[size][5]

    arr[1][3] = 12;

    for(int i=0; i<size; ++i)
    {
        for(int j=0; j<5; ++j)
        {
            arr[i][j] = (i*2)+j;
        }
    }

    for(int i=0; i<size; ++i)
    {
        for(int j=0; j<5; ++j)
        {
            //cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
