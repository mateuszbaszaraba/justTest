#include <iostream>
#include <string>

int fun(int m, int n) {return n*m;}


class Ttest
{
    const double stala;
    int n;
    char c = '%';
    std::string nazwa;
    int & przezwisko;

public:
    Ttest(int pp, double dd, char znak, int &ref);

    Ttest(std::string tekst, double liczba, int &ref) : stala{liczba}, n{12}, c{'#'}, nazwa{tekst}, przezwisko(ref){};

    Ttest(int liczba, int &ref) : stala{0.1 *fun(liczba, ref)}, n{22*fun(ref, 4)}, nazwa{"proba.txt"}, przezwisko{ref}{};

    void opisz()
    {
        std::cout << "skladniki obiektu: stala = " << stala << ", n=" << n
                << ", c=[" << c << "], nazwa=[" << nazwa << "], przezwisko="
                << przezwisko << std::endl;
    }

};

Ttest::Ttest(int pp, double dd, char znak, int &ref) : stala{dd}, c{znak}, przezwisko(ref)
{
    n = pp;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    int skrytka = 100;
    int poletko = 5;

    Ttest obiekt1{10, 3.14, '@', skrytka};
    obiekt1.opisz();

    Ttest obiekt2{"plik.txt", 7.21, poletko};
    obiekt2.opisz();

    Ttest obiekt3{33, poletko};
    obiekt3.opisz();

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
