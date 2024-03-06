#include <iostream>

using namespace std;

// funkcja przyjmuje jako argument wskaźnik
void zwieksz_liczbe (int *liczba)
{
    *liczba+= 5;
}

int main()
{
    int numerek = 5;
    int *wsk = &numerek;
    
    zwieksz_liczbe(wsk); //przekazujemy wskaźnik (bez operatorów)
    
    cout << numerek << endl;
    
    zwieksz_liczbe(&numerek); //przekazujemy bezpośrednio adres zmiennej (operator &)
    
    cout << numerek << endl;
    
    return 0;
}