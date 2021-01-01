//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>

using namespace std;

int main() {

    int size;

    cout << "Size: ";
    cin >> size;

    int *arr = new int[size];

    for(int i=0; i<size; ++i)
    {
        arr[i] = i*10;
    }

    *(arr + 3) = 73;
    arr[4] = 51;

    for(int i=0; i<size; ++i)
    {
        cout << arr[i] << endl;
    }

    int *arr2 = new int[] {1, 2, 4, 5, 6};

    return 0;
}
