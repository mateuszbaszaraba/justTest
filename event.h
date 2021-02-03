#include <iostream>

using namespace std;

class Tevent
{
private:
    int day, month, year;
    int hour, minutes;
    string name;
public:
    Tevent(string="brak", int=1, int=1, int=2000, int=0, int=0);
    ~Tevent();
    void load();
    void show();
};