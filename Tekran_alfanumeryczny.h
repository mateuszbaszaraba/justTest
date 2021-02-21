//
// Created by Mateusz Baszaraba on 21/02/2021.
//

#ifndef JUSTTEST_TEKRAN_ALFANUMERYCZNY_H
#define JUSTTEST_TEKRAN_ALFANUMERYCZNY_H

#include <string>
#include <iostream>

class Tekran_alfanumeryczny
{
    std::string tresc;
    char znak_tla;

public:
    enum {szerokosc_ekranu = 63, wysokosc_enum = 17};
    static constexpr int wysokosc_ekranu = 17;

    Tekran_alfanumeryczny(char znak=' ')
    {
        znak_tla = znak;
        wyczysc();
    }

    void wyczysc()
    {
        tresc.clear();
        std::string jedna_linia(szerokosc_ekranu-1, znak_tla);
        jedna_linia += '\n';
        for(int i=0; i<wysokosc_ekranu; ++i) tresc += jedna_linia;
    }

    void wyswietl()
    {
        std::cout << tresc << std::flush;
    }

    void napisz(int kolumna, int rzad, std::string tekst)
    {
        tresc.replace((szerokosc_ekranu*rzad)+kolumna, tekst.length(), tekst);
    }

};

#endif //JUSTTEST_TEKRAN_ALFANUMERYCZNY_H
