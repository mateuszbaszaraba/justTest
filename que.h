#include <iostream>

using namespace std;

class Question {
public:
    string content;
    string a,b,c,d;
    int que_num;
    string right_answer;
    string answer;
    int points;

    void readFromFile();
    void showQue();
    void checkAns();

};
