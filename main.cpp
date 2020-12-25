//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>

using namespace std;

void disArr(char arr[][15], int w, int k);

int main() {

    constexpr int w {3};
    constexpr int k {15};
    char shelf[w][k] {};

    char znak = '!';

    /*
    for (int i=0; i<w; ++i)
    {
        for(int j=0; j<k; ++j)
        {
            shelf[i][j] = znak++;
        }
    }
     */

    for(auto & i : shelf)
    {
        for(auto & j : i)
        {
            j = znak++;
        }
    }

    /*    // range based for
    for(auto & el : shelf)
    {
        for(auto & ell : el) {
            cout << ell;
        }
    }
     */

    disArr(shelf, w, k);

    return 0;
}

void disArr(char arr[][15], int w, int k)
{
    for (int i=0; i<w; ++i)
    {
        for(int j=0; j<k; ++j)
        {
            cout << arr[i][j];
        }
    }
}