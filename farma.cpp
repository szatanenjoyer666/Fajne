#include <iostream>
using namespace std;

struct zwierzeta 
{
    string nazwa;
    float waga;
    short wiek;
};

int main()
{
    Zwierzeta Farmer[ 5 ];
    cout << "Wprowadz dane zwierzat:\n";
    for( short licz = 0; licz < 5; licz++ ) {
        cout << "Nazwa: ";
        cin >> Farmer[ licz ].nazwa;
        cout << "Waga (gram): ";
        cin >> Farmer[ licz ].waga;
        cout << "Wiek (tygodnie): ";
        cin >> Farmer[ licz ].wiek;
    }


    cout << endl
    << "Wprowadzone zwierzeta: "
    << endl;
    for( short licz = 0; licz < 5; licz++ ) {
        cout << "Zwierze nr " << licz + 1
        << "\tNazwa: " << Farmer[ licz ].nazwa
        << "\tWaga: " << Farmer[ licz ].waga
        << "\tWiek: " << Farmer[ licz ].wiek
        << endl;
    }

    cin.get();

    cin.get();
    return( 0 );
}