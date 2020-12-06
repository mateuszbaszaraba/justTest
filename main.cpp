#include <iostream>

using namespace std;

void red();
void blue();
int main() {
    red();
    blue();
    red();
    red();
    blue();

    return 0;
}

void red() {
    static int num;
    ++num;
    cout << "Red: " << num << endl;
}

void blue() {
    static int num = 100;
    cout << "Blue: " << num << endl;
    ++num;
}