#include <iostream>

using namespace std;

void rozklad(int l) {
    int k = 2; 

    while (l > 1) {
        while (l % k == 0) { //rozklad, jak tak to wypis, 
            cout << k << " ";
            l = l / k;  //warunek spelniony, leci do while i jak nie to +
        }
        k = k + 1; //jak nie moze sie wykonac, jesli liczba % to nie 0
    }

    cout << endl;
}

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Czynniki pierwsze liczby " << liczba <<": ";
    rozklad(liczba); //wywolywanie f, liczba przypis do zm L
    return 0;
}
