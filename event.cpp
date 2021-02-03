#include <iostream>
#include "event.h"

using namespace std;

void Tevent::load()
{
    cout << endl << "Nazwa wydarzenia: ";
    cin >> name;
    cout << endl << "Dzien: ";
    cin >> day;
    cout << endl << "Miesiac: ";
    cin >> month;
    cout << endl << "Rok: ";
    cin >> year;
    cout << endl << "Godzina: ";
    cin >> hour;
    cout << endl << "Minut: ";
    cin >> minutes;
}

void Tevent::show()
{
    cout << endl << name << " " << day << "." << month << "." << year
    << " " << hour << ":" << minutes << endl;
}

Tevent::Tevent(string n, int d, int m, int y, int h, int mins) {
    name = n;
    day = d;
    month = m;
    year = y;
    hour = h;
    minutes = mins;
}

Tevent::~Tevent() {
    cout << endl << "Destruktor" << endl;
}