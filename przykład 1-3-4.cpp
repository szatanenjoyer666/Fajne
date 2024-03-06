#include <iostream>

using namespace std;

void zwiekszWartosc(double &a, double d){
	a += d;
}
void zwiekszWartosc(double &a){
	zwiekszWartosc(a, 1.0);
}

void zwiekszWartosc(int &a, int d){
	a += d;
}
void zwiekszWartosc(int &a){
	zwiekszWartosc(a, 1);
}

int main() {
	double a = 1.5;
	zwiekszWartosc(a);
	cout << a << endl;
	zwiekszWartosc(a, 2.5);
	cout << a << endl;
	system("pause");
	return 0;
}