//uwu
#include <iostream>
using namespace std;

int main()
{
	 char tablica[100];
	int pozySpacji, pozykonca;

    cout<<"Podaj imie i nazwisko: "; 
    cin.getline(tablica,100); 
    cout<<"Twoje dane osobowe: "<<tablica<<endl;

	for (int i = 0; i < sizeof(tablica); i++) {
		if(tablica[i] == ' ')
			pozySpacji = i;
		if(tablica[i] == '\0'){
			pozykonca = i;
			break;
		}

	}
	cout << "Pozycja spacji: " << pozySpacji << endl;
	cout << "Pozycja konca: " << pozykonca << endl;

    return 0;
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
