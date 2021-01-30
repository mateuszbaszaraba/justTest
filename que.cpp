#include <iostream>
#include <fstream>
#include <cstdlib>
#include "que.h"

using namespace std;

void Question::readFromFile()
{
    fstream file;
    file.open("questions.txt", ios::in);
    if(file.good()==false) {
        cout << "Failed to open a file!";
        exit(0);
    }
    int line_num = (que_num - 1)*6+1;
    int actual_line_num = 1;
    string line;

    while(getline(file, line))
    {
        if(actual_line_num==line_num) content = line;
        if(actual_line_num==line_num+1) a = line;
        if(actual_line_num==line_num+2) b = line;
        if(actual_line_num==line_num+3) c = line;
        if(actual_line_num==line_num+4) d = line;
        if(actual_line_num==line_num+5) right_answer = line;

        actual_line_num++;
    }
    file.close();
}

void Question::showQue()
{
    cout << endl << content << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << "-------------\n Answer: " << endl;
    cin >> answer;
}

void Question::checkAns()
{
    if(answer == right_answer)
        points = 1;
    else
        points = 0;
}