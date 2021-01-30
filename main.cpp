//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>
#include "que.h"

using namespace std;


int main() {

    Question q[2];
    int points_sum = 0;

    for(int i=0; i<2; i++)
    {
        q[i].que_num = i+1;
        q[i].readFromFile();
        q[i].showQue();
        q[i].checkAns();
        points_sum += q[i].points;
    }

    cout << "POINTS = " << points_sum << endl;

    return 0;
}