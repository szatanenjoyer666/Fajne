
#include <iostream>
using namespace std;

int main() {
	//while 30..10 parzyste
	short a = 30;
	while (a >= 10) {
		cout << a << ", ";
		a -= 2;

	}

	//do.. while pytac o liczbe zmniejszac jej wartosc o polowe do 0
	// zamiast short moze byc tez cos innego zeby np byly liczby po przecinku :P
	short liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	do {

		cout << liczba << ", ";
		liczba = liczba / 2 ;

	} while (liczba > 0);







	cout << endl;
	system("pause");

}