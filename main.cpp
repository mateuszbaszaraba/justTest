#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

vector<Tcar> cars;
vector<Tcar> rentingCars;

void initCars(vector<Tcar> &);
void showCars(vector<Tcar> &);
void chooseCar(vector<Tcar> &, vector<Tcar> &);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {

    initCars(cars);
    showCars(cars);
    chooseCar(cars, rentingCars);


    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void initCars(vector<Tcar> &cars)
{
    Tcar c1 {"BMW", "e46", 10000.00};
    Tcar c2 {"Mercedes", "w204", 200000.00};
    Tcar c3 {"Ford", "Kuga", 180000.00};
    Tcar c4 {"Mercedes", "A140", 20000.00};

    cars.push_back(c1);
    cars.push_back(c2);
    cars.push_back(c3);
    cars.push_back(c4);
}

void showCars(vector<Tcar> &cars)
{
    cout << string(6, '*') << "Which of these cars do you want to rent?" << string(6, '*') << endl;
    for(int i=0; i<cars.size(); ++i)
    {
        cout << "[" << i << "] ";
        cars[i].getInfo();
    }
}

void chooseCar(vector<Tcar> &, vector<Tcar> &)
{
    cout << ".";
}