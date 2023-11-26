#include <iostream>
using namespace std;

int main(){
	int szerokosc;
	int wysokosc;
	cout <<"Podaj szerokosc: ";
	cin >> szerokosc;
	cout << "Podaj wysokosc: ";
	cin >> wysokosc;
	
	for(int i=0; i < wysokosc; i++){
		for(int j=0; j < szerokosc; j++){
			if(i == 0 || i == wysokosc -1)
			cout <<"-";
			else if(j == 0 || j == szerokosc -1)
			  cout << "|";
			else
			   cout << "#*";
			
		}
		cout <<endl;
		
		
	}
	
	
	
	
}
//Nie do konca wiem jak dobrze stworzyc ta szachownice, wiec nie wyglada to tak jak powinno.Chetnie sie dowiem jakie jest poprawne rozwiazanie.