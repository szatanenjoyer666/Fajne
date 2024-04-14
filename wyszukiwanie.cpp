#include <iostream>

using namespace std;

int main()
{
    int tab[45] ={2, 1, 3, 4 , 6, 2, 8, 7, 9, 10, 7, 11, 12, 11, 13, 2, 3, 16, 17, 18, 19, 20, 22, 8, 66, 666, 26, 9, 11, 13, 4, 999, 8, 11, 13, 15,19, 20, 22, 8, 66, 1, 69, 2, 29};
    int liczby[45];
    short szukana;
    short index = 0;

    cout << "Jaka liczbe poszukujesz: ";
    cin >> szukana;

    for(int i=0; i< sizeof(tab); i++){
        if(tab[i] == szukana){
            liczby[index] = i;
            index++;
        }
    }

    cout << "Poszukiwana liczba znajduje sie na pozycji: " << endl;
    for(int i =0; i < index; i++){
        cout << liczby[i] << ", ";
    }
}