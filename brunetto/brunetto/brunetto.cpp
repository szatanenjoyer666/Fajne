#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char dzialanie;

    cout << "Podaj liczbe a: " << endl;
    cin >> a;
    cout << "Podaj liczbe b: " << endl;
    cin >> b;
    cout << "Wybierz dzialanie (+, -, *, /):" << endl;
    cin >> dzialanie;

    switch (dzialanie) {
    case '+':
        cout << "wynik dodawania: " << a + b << endl;
        break;
    case '-':
        cout << "wynik odejmowania: " << a - b << endl;
        break;
    case '*':
        cout << "wynik mno¿enia: " << a * b << endl;
        break;
    case '/':
        cout << "wynik dzielenia: " << a / b << endl;
        break;
    }

    return 0;
}