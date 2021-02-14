#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Tcar {
    string brand;
    string model;
    double price;
public:
    Tcar(string, string, double);
    void getInfo() const
    {
        cout << "Brand: " << setw(8) << brand << " | Model: " << setw(4) << model
        << " | price: " << setw(6) << price << endl;
    }
};