//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>

using namespace std;

int main() {

    int a {5};
    int b {100};

    int *pa = &a;                           //normal pointer
    int *const const_p = &a;                //constant pointer

    //*const_p++;                           //cannot do that
    *pa = 1;
    *const_p = 2;

    pa = &b;
    // const_p = &b;                        // ERROR

    int arr[4] = {0, 1, 2, 3};
    int tmp;

    int *w;
    const int *const_p2;
    w=arr;
    const_p2=arr;

    tmp = *w;
    tmp = *const_p2;

    w++;
    const_p2++;

    *w = 4;
    //*const_p2 = 5;                        //cannot do that

    cout << *w << "wtf" << *const_p2 << endl;

    int tmp2 = 4;

    const int *const p3 = &tmp2;            //cannot 'move' and change value


    return 0;
}
