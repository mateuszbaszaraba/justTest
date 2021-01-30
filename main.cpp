//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>

using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;
        int mileage;

        void add_car()
        {
            cout << "Add new car!" << endl;
            cout << "Brand: " << endl;
            cin >> brand;
            cout << "Model: " << endl;
            cin >> model;
            cout << "Year: " << endl;
            cin >> year;
            cout << "Mileage: " << endl;
            cin >> mileage;
        }

        void show_car()
        {
            cout << "Brand: " << brand << " | Model: " << model << " | Year: " << year << " | Mileage: " << mileage << endl;
        }
};

int main() {

    Car c1;
    c1.add_car();
    c1.show_car();

    return 0;
}