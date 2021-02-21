#include <iostream>
#include <string>
#include <ctime>
#include "Tekran_alfanumeryczny.h"
#include "Tprzyrzad.h"

Tekran_alfanumeryczny ekran('.');
void zwloka(double sekund);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    ekran.wyczysc();
    Tprzyrzad Pred(2, 1, "predkosc", "wezlow", 110);
    Tprzyrzad Vari(2, 7, "wznoszenie", "stopy/sek");
    Tprzyrzad A;
    Tprzyrzad B {};
    volatile Tprzyrzad C;
    const Tprzyrzad Udzw(2,11,"udzwig max", "ton", 15000);

    for(int i=0; i<30; ++i)
    {
        Vari.zmien_wskazanie(i);
        Pred.zmien_wskazanie(110+i);
        A.zmien_wskazanie(-i);
        B.zmien_wskazanie(i%4);
        zwloka(0.2);
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void zwloka(double sekund)
{
    time_t poczatkowy_czas = time(nullptr);
    while(time(nullptr) - poczatkowy_czas < sekund);
}