#include <iostream>
using namespace std;

float Brutto(float n);
float Netto(float b);

int main()
{
    int wybor;
    float netto, brutto;
    cout << "Ktora kwote chcesz obliczyc? \n 1. Brutto \n 2. Netto" << endl;
    cin >> wybor;

    switch (wybor)
    {
    case 2:
        cout << "Podaj kwote netto: ";
        cin >> netto;
        cout << "Brutto: " << Brutto(netto) << " zl" << endl;
        break;
    case 1:
        cout << "Podaj kwote brutto: ";
        cin >> brutto;
        cout << "Netto: " << Netto(brutto) << " zl" << endl;
        break;
    }
}

float Brutto(float n) {
    float nettoBrutto;
    nettoBrutto = n + ((23 * n) / 100);
    return nettoBrutto;
}

float Netto(float b) {
    float bruttoNetto;
    bruttoNetto = b - ((23 * b) / 100);
    return bruttoNetto;
}