//
// Created by Mateusz Baszaraba on 21/02/2021.
//

#include "Tprzyrzad.h"
#include "Tekran_alfanumeryczny.h"

extern Tekran_alfanumeryczny ekran;


Tprzyrzad::Tprzyrzad(int xx, int yy, std::string nnn, std::string jedn, int w)
{
    nazwa = nnn;
    jednostka = jedn;
    pokazuje = w;
    x = xx;
    y = yy;
    narysuj();
}

Tprzyrzad::Tprzyrzad() {
    ++ile_nieznanych;
    jednostka = " ";
    nazwa = "Wskaznik nr ";
    nazwa += std::to_string(ile_nieznanych);
    x = 33;
    y = 1 + (ile_nieznanych - 1) * 4;

    pokazuje = 0;
    narysuj();
}

void Tprzyrzad::zmien_wskazanie(int w)
{
    pokazuje = w;
    narysuj();
}

void Tprzyrzad::narysuj()
{
    ekran.napisz(x, y,         "_________________________");
    ekran.napisz(x, y+1, "|                        |");
    ekran.napisz(x, y+2, "|                        |");
    ekran.napisz(x, y+3,  "_________________________");

    ekran.napisz(x+4, y+1, nazwa);
    ekran.napisz(x+7, y+2, std::to_string(pokazuje));
    ekran.napisz(x+14, y+2, jednostka);
    ekran.wyswietl();
}

int Tprzyrzad::ile_nieznanych;