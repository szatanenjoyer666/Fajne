// uh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    /*
    int wiek;
    cout << "Podaj ile masz lat ";
    cin >> wiek;
    cout << "Masz " << wiek - 10 << " lat";
    */


    int liczba_calkowita= 11;
    float liczba_zmiennoprzecinkowa = 5.564;
    //string tekst = 'tekst'
    char znak = 'a';
    bool czy_jest_cieplo = true;

    /*cout << "Liczba calkowita" << liczba_calkowita;
    cout << "Liczba zmiennoprzecinkowa" << liczba_zmiennoprzecinkowa;
    cout << "Fajny znak" << znak;
    cout << "Czy jest cieplo" << czy_jest_cieplo<<endl;*/

    cout << "Podaj wartoœæ calkowita";
    cin >> liczba_calkowita;
    cout << "Liczba calkowita" << liczba_calkowita << endl;

    return 0;
}


