//
// Created by Mateusz Baszaraba on 08/12/2020.
//
#include <iostream>

using namespace std;

int sumator(int jeszcze_krokow, int suma_dotychczas);
void schodki(int ile, char znak);
void dwojkowo(int liczba);

int main() {
    cout << "sumowanie liczb od 0 do n. Podaj wartość n: ";
    int n;
    cin >> n;
    cout << "Suma liczb naturalinych od 0 do " << n << " to = \n" << sumator(n, 0) << endl;


    int liczba = 241;
    cout << liczba << " to dwojkowo ";
    dwojkowo(liczba);
    cout << endl;

    return 0;
}

int sumator(int jeszcze_krokow, int suma_dotychczas)
{
    int rezultat = 0;
    static int krok_rekurencji;

    int to_pietro_nr = krok_rekurencji;
    krok_rekurencji++;
    schodki(to_pietro_nr, '>');

    cout << suma_dotychczas << " + " << to_pietro_nr << " = " << (suma_dotychczas + to_pietro_nr) << endl;
    suma_dotychczas += to_pietro_nr;

    if(jeszcze_krokow > 0) {
        rezultat = sumator(jeszcze_krokow-1, suma_dotychczas);
    } else {
        cout << "...wracamy..." << endl;
        rezultat = suma_dotychczas;
    }
    schodki(to_pietro_nr, '<');
    cout << endl;
    krok_rekurencji--;
    return rezultat;
}

void schodki(int ile, char znak) {
    cout << ile << " pietro: ";
    for(int m=0; m<ile; m++)
    {
        cout << znak << " ";
    }
    cout << " ";
}

void dwojkowo(int liczba)
{
    int reszta = liczba%2;
    if(liczba > 1)
    {
        dwojkowo(liczba/2);
    }
    cout << reszta;
}