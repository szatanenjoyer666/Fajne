#include <iostream>

using namespace std;

void rozklad(int liczba) {
    int k = 2; 

    while (liczba > 1) {
        while (liczba % k == 0) { //rozklad
            cout << k << " ";
            liczba = liczba / k;  
        }
        k = k + 1; 
    }

    cout << endl;
}

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Czynniki pierwsze liczby " << liczba <<": ";
    rozklad(liczba);
    return 0;
}
