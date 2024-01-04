#include<iostream>
using namespace std;

int main()
{
    string s1 = "C";
char cn[] = "string";
string s = s1 + '-' + cn;
cout << s << endl;

cout << "Length string: " << s1.length() << endl;
cout << "Length tablica: " << sizeof(cn) << endl;


    return 0;
}