//
// Created by Mateusz Baszaraba on 08/12/2020.
//
#include <iostream>

#define DDZ(color, data) int player_##color##_##data

using namespace std;

int main() {

    DDZ(green, height) {40};  // int player_green_height {40}

    cout << player_green_height;

    return 0;
}
