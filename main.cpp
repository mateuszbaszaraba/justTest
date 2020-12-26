//
// Created by Mateusz Baszaraba on 08/12/2020.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

void changeVec(vector<vector<int>> &v);
void disVec(vector<vector<int>> v, string info = "worksheet");
int main() {

    vector<vector<int>> worksheet
            {
                    { 10, 20, 30 },
                    { 40, 1250, 260, 50 }
            };

    disVec(worksheet);
    changeVec(worksheet);
    disVec(worksheet);
    worksheet.resize(1);
    disVec(worksheet);
    worksheet.resize(6);
    for(int i=1; i < 7; ++i)
    {
        worksheet[i].resize(3);
    }
    disVec(worksheet);
    worksheet[1].push_back(420);
    worksheet.push_back({12, 42, 51});
    disVec(worksheet);
    worksheet[0].pop_back();
    worksheet.pop_back();
    disVec(worksheet);

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

    for(auto & el : v)
    {
        for(auto & ell : el)
        {
            ell += 100;
        }
    }
    disVec(v, "changing");
}
