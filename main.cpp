//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>

using namespace std;

void display(const int *p, int amount = 4);
void change(int *p, int amount = 4);
void displayArr(int arr[], int amount = 4);

int main() {

    int arr[4] = {10, 20, 30, 40};

    cout << "**Before**" <<endl;
    display(arr);
    change(arr);
    cout << "**After**" <<endl;
    display(arr);
    cout << "**Random_Check**" << endl;
    cout << "arr[3] = " << arr[3] << endl;
    displayArr(arr);

    for(auto &el : arr)
         el *= 10;

    for(const auto &el : arr)
        cout << el << endl;

    display(arr);

    return 0;
}

void display(const int *p, int amount)
{
    for(int i=0; i<amount; ++i, ++p)
    {
        cout << "arr[" << i << "] = " << *p << endl;
    }

}

void displayArr( int arr[], int amount)
{
    for(int i=0; i<amount; ++i)
    {
        cout << arr[i] << endl;
    }

}

void change(int *p, int amount)
{
    for(int i=0; i<amount; ++i, ++p)
    {
        *p *= 10;
    }
}