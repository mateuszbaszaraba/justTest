#include <iostream>

using namespace std;

double poczatek_x;
double poczatek_y;
double skala_x = 1;
double skala_y = 1;

inline double wspx(double wspolrzedna)
{
    return((wspolrzedna - poczatek_x) * skala_x);
}

inline double wspy(double wspolrzedna)
{
    return((wspolrzedna - poczatek_y) * skala_y);
}

int main() {
    double x1 = 100, y1 = 100;
    cout << "x = " << wspx(x1) << " y = " << wspy(y1) << endl;
    return 0;
}
