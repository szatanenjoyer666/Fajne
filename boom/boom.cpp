#include <iostream>
using namespace std;

int main()
{
    int iStart;

    iStart = 10;
    while( iStart >= 0 )
    {
        cout << iStart << " meow ";
        --iStart;
    } //while
    cout << "..Meow!" << endl;

    return 0;
}