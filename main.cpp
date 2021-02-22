#include <iostream>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    char *w1 = new char {'x'};
    std::cout << *w1 << std::endl;

    auto *p1 {new int {3213}};
    std::cout << *p1 << std::endl;

    const auto *p2 {new const int {51124}};
    std::cout << *p2 << std::endl;

    delete w1;
    delete p1;
    delete p2;

    int *wtab = new int[5];
    for(int i=0; i<5; ++i)
        wtab[i] = i;

    for(int j=0; j<5; ++j)
        std::cout << wtab[j];

    delete [] wtab;

    std::cout << std::endl;

    int *wtab2 {new int[8] {1,5,6,7,3,2}};

    for(int k=0; k<8; ++k)
        std::cout << wtab2[k] << "\t";

    delete [] wtab2;



    std::cout << "how many";
    int howmany;
    std::cin >> howmany;

    int *p_arr {new int[howmany]};

    for(int c=0; c<howmany; ++c)
        p_arr[c] = c;

    for(int d=0; d<howmany; ++d)
        std::cout<<p_arr[d];



    std::cout << "array 2d\n how many rows: ";
    int rows;
    std::cin >> rows;

    int (*p_arr2d)[6] = new int[rows][6];    // auto *tab = new int[rows][6]

    for(int s=0; s<rows; ++s)
        for(int f=0; f<6; ++f)
        {
            p_arr2d[s][f] = s;
            std::cout << p_arr2d[s][f];
        }



    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
