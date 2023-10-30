#include<iostream>
using namespace std;
int main(){
	 //Liczby calkowite - short int, long, long long, unsigned short
	 short a, b;
	 cout <<"Podaj a";
	 cin >> a;
	 cout <<"Podaj b";
	 cin >> b;
	 
	 //Instrukcja warunkowa - if(warunek)
	 if (a > b){
	 	cout << a << ">" << b; //cout <<zmienna <<"tekst" << zmienna;
	 }
	 // = operator przypisania
	 // == operator porownania
	 else if(a == b){  //sprawdzamy kolejny warunek, jezeli powyzej sie nie spelni
	   cout << a << "==" << b;
	 }
	 else{  //w przeciwnym wypadku, jezeli warunek sie nie spelni
	    cout << a << "<" <<b;
	 }
	 
	 
	 
	 
}