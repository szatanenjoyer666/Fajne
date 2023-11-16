#include <iostream>
using namespace std;

int main(){
    int szerokosc;
	int wysokosc;	
	cout <<"Podaj szerokosc: ";
	cin >> szerokosc;
	cout <<"Podaj wysokosc: ";
	cin >> wysokosc;
	
	for(int i=0; i < szerokosc; i++){
		for(int j=0; j < wysokosc; j++){
			cout << "*";
		}
		cout << endl;
	}
	
	
	
	
	
	
}