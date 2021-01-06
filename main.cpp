//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>

using namespace std;

int main() {

    int tmp {5};

    auto *a = &tmp;             //int * - wsk do int
    const auto *b = &tmp;       //const int * - wsk do stałych int
    auto *const c = &tmp;       //int *const - nieruchomy wsk do int
    const auto *const d = &tmp; //const int *const - nieruchomy wsk do stałych typu int

    // *b = 6;    error bcs const
    ++b;

    *c = 6;
    //++c;  error bcs nieruchomy

    const double obj_con = 100.0;

    auto *e = &obj_con;                 //const double *
    const auto *f = &obj_con;           //const double *
    auto *const g = &obj_con;           //const double * const
    const auto *const h = &obj_con;     //const double * const


    return 0;
}
