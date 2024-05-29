#include <iostream>

using namespace std;

int main( )
{
  int n, lp, p, d; //liczby cał
  bool t; //zmienna prawda

  cout << "Ile liczb pierwszych chcesz wyswietlic: ";
  cin >> n;
  lp = 0;
  p  = 2;
  cout << "Liczby pierwsze: ";
  while( lp < n )
  {
    t = true;
    for( d = 2; d < p; d++ ){
      if( p % d == 0 )
      {
        t = false;
 
      }
    }
    if( t )
    {
        cout << p << ", ";
        lp++;
    }
    p++;
  }
  cout << endl;
  return 0;
} 
