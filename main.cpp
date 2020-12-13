//
// Created by Mateusz Baszaraba on 08/12/2020.
//
#include <iostream>

using namespace std;

constexpr  double mile_na_kilometry(double mil)
{
    return (1.609344 * mil);
}

int main() {
    constexpr double dystans_m = 2614;
    constexpr double dystans_km = mile_na_kilometry(dystans_m);

    cout << "dystans paryz - dakar to " << dystans_km << " km." << endl;

    for(int m = 100; m < 600; m += 200)
    {
        cout << m << " mil odpowiada " << mile_na_kilometry(m) << " km." << endl;
    }

    return 0;
}
