//
// Created by Mateusz Baszaraba on 21/02/2021.
//

#ifndef JUSTTEST_TPRZYRZAD_H
#define JUSTTEST_TPRZYRZAD_H

#include <string>

class Tprzyrzad {
    std::string nazwa;
    std::string jednostka;
    int pokazuje;
    int x, y;
    static int ile_nieznanych;

public:
    Tprzyrzad(int, int, std::string, std::string, int wart=0);
    Tprzyrzad(void);

    void zmien_wskazanie (int w);
    void narysuj();
};


#endif //JUSTTEST_TPRZYRZAD_H
