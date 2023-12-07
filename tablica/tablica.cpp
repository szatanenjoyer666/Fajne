#include <iostream>
using namespace std;

int main()
{
    int liczby[ 3 ];
    cout << "Podaj liczbe 1:";
    cin >> liczby[ 0 ];
    cout << "Podaj liczbe 2:";
    cin >> liczby[ 1 ];
    liczby[ 2 ] = 567;
    cout << "literki[2] wynosi " << literki[ 2 ] << endl;
    int suma = liczby[ 0 ] + liczby[ 1 ] + literki[ 2 ];
    cout << "Suma trzech liczb wynosi:" << suma << endl;
   
    return 0;
}