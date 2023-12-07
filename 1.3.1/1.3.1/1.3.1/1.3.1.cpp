// 1.3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int liczba[5];
    cout << "Wprowadz 5 liczb: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> liczba[i];
    }

    cout << "Liczby parzyste: ";
    for (int i = 0; i < 5; i++)
    {
        cout << liczba[i] << ", ";
    }
    return 0;

}


// if (liczba%2==0)