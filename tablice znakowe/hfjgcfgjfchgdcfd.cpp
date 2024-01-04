#include<iostream>
using namespace std;

int main()
{
string s = "Basia";
s[0] = 'M';
s[1] = 'i';
s[2] = 'c';
s[3] = 'h';
for (int i = 0; i < 5; i++) {
    cout << s[i];
}
return 0;
}