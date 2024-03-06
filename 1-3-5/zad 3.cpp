#include <iostream>
using namespace std;

void uh (float *liczba)
{
 *liczba+= 1;
}

int main()
{
	float liczba =1;
	float *wsk = &liczba;
	
	uh (wsk);
	cout << "wartosci zmiennych przed: "<<endl;
	cout <<"a: "<<liczba<<endl; 
	cout<<"b: "<<liczba<<endl;
	cout <<"c: "<<liczba<<endl; 
	#tu trzeba coś zrobić żeby nie było 2 a 1 ale idk
	cout << "wartosci zmiennnych po mody" << endl;
	cout << liczba << endl;
	
	
	
	
	return 0;
}