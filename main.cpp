//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>

using namespace std;

enum class Tetap {
    nic, scenopis, proba_czytana, proba_kamerowa, nagranie, montaz, postsynchron
};

void stan_realizacji(Tetap s[], int ile, int dzien);
int main() {
    const int liczba_scen = 10;
    Tetap scena[liczba_scen] = {Tetap::scenopis, Tetap::proba_czytana, Tetap::proba_kamerowa};

    int dzien_realizacji = 1;

    scena[2] = Tetap::nagranie;
    scena[5] = Tetap::montaz;
    scena[9] = Tetap::nagranie;
    scena[4] = Tetap::proba_kamerowa;
    stan_realizacji(scena, liczba_scen, dzien_realizacji);

    dzien_realizacji++;

    using Tetapp = Tetap; //nowy alians, zmiana nazwy

    scena[1] = Tetapp::proba_kamerowa;
    scena[5] = Tetapp::postsynchron;
    scena[0] = Tetapp::scenopis;
    scena[8] = Tetapp::scenopis;
    stan_realizacji(scena, liczba_scen, dzien_realizacji);

    return 0;
}

void stan_realizacji(Tetap s[], int ile, int dzien)
{
    cout << dzien << ". dzien realizacji filmu reklamowego\n" << "Stan realizacji: \n";
    for(int i = 0; i < ile; i++)
    {
        cout << "Scena nr " << i << ", ";
        int zaawansowanie = static_cast<int> (s[i]);  //rzutowanie
        for (int j = 0; j < zaawansowanie; j++)
        {
            cout << "#";
        }
        cout << endl;
    }
}