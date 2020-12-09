//
// Created by Mateusz Baszaraba on 08/12/2020.
//
#include <iostream>
#include <string>

using namespace std;

int globalny_jedynkowy {25};
int globalny_inny {77};

int f_wartosc(int ktory)
{
    int lokalny {4};
    if(ktory == 1) return globalny_jedynkowy;
    else return globalny_inny;
}

int & f_ref_lwartosc(int ktory)
{
    int lokalny {4};
    if(ktory == 1) return globalny_jedynkowy;
    else return globalny_inny;
}

void wypisz(string txt, int a)
{
    cout << txt;
    if(a) cout << a << ", ";
    cout << "globalny_jedynkowy = " << globalny_jedynkowy << "globalny_inny = " << globalny_inny << endl;
}

int main() {
    int n {0};
    n = f_wartosc(1);
    wypisz("rezultat= ", n);
    n = f_wartosc(6);
    wypisz("rezultat= ", n);

    n = f_ref_lwartosc(1);
    wypisz("rezultat2= ", n);
    n = f_ref_lwartosc(6);
    wypisz("rezultat2= ", n);

    f_ref_lwartosc(1) = 5000;
    wypisz("wypisane", 0);

    f_ref_lwartosc(6) = 7500;
    wypisz("wypisane", 0);
    return 0;
}
