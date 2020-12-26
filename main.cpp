//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

void changeVec(vector<vector<int>> &v);
void disVec(vector<vector<int>> v, string info);
int main() {

    vector<vector<int>> worksheet
            {
                    { 10, 20, 30 },
                    { 40, 1250, 260, 50 }
            };

    disVec(worksheet, "worksheet");
    changeVec(worksheet);
    disVec(worksheet, "worksheet");
    worksheet.resize(1);
    disVec(worksheet, "worksheet");
    worksheet.resize(6);
    for(int i=1; i < 7; ++i)
    {
        worksheet[i].resize(3);
    }
    disVec(worksheet, "worksheet");


    return 0;
}

void disVec(vector<vector<int>> v, string info)
{
    cout << info << " amount of rows: " << v.size() << endl;

    for(int i=0; i<v.size(); ++i)
    {
        cout << "Row id: " << i << " length: " << v[i].size() << " -----> |";
        for(int j=0; j<v[i].size(); ++j)
        {
            cout << setw(4) << v[i][j] << " | ";
        }
        cout << endl;
    }

}

void changeVec(vector<vector<int>> &v)
{
    cout << "changing..." << endl;
    for(int i=0; i<v.size(); ++i)
    {
        for(int j=0; j<v[i].size(); ++j)
        {
            v[i][j] += 100;
        }
    }
    disVec(v, "changing");
}
