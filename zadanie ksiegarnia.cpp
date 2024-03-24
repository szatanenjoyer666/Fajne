#include <iostream>
using namespace std;

struct Ksiegarnia 
{
    //literki, tekst itp
	string tytul;
    string autor;
    //liczby, mniej miejsca zajmuje
    short rok;
    string wydawnictwo;
    //przecinki, nie potrzeba więcej
    float cena;
};
//funkcja co zbiera, ale nie oddaje, gwiazdka-wyciąga wartość ze wskaźnika
void KsiazkiRok(Ksiegarnia ksiazki1[], short *rok1);
void KsiazkiCena(Ksiegarnia ksiazki1[], float *cena1);
void KsiazkiWydawnictwo(Ksiegarnia ksiazki1[], string *wydawnictwo1);

int main()
{
    Ksiegarnia ksiazki[ 8 ] =
    {
        { "Tytul1", "autor1", 1755, "wydawnictwo1", 15.50 },
        { "Tytul2", "autor2", 1855, "wydawnictwo2", 24.00 },
        { "Tytul3", "autor1", 2000, "wydawnictwo3", 25.50 },
        { "Tytul4", "autor2", 1855, "wydawnictwo4", 25.00 },
        { "Tytul5", "autor1", 1900, "wydawnictwo2", 20.55 },
        { "Tytul6", "autor2", 1950, "wydawnictwo1", 20.55 },
        { "Tytul7", "autor3", 2000, "wydawnictwo3", 30.00 },
        { "Tytul8", "autor3", 2010, "wydawnictwo3", 35.00 },
    };
//deklaracja
    short wybor, rok;
    float cena;
    string wydawnictwo;
    cout << "Witaj w ksiegarnii"<< endl;
    do{
        cout << "Po jakiej kategorii chcial bys wyszukac ksiazke:\n";
        // \n sprawia że jest na dole
        cout << "1. Rok wydania \n2. Cena \n3. Wydawnictwo\n0. Wyjscie\n";
        cin >> wybor;
    	//pozwala jakiejkolwiek wartości zmienić dany wybór
        switch (wybor){
        case 1:
            cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
            //wprowadzamy dane
            cin >> rok;
            cout << "Znalezione ksiazki:\n";
            //& pobiera adres tutaj "rok"
            KsiazkiRok(ksiazki, &rok);
            break;
        case 2:
            cout << "Podaj od jakiej ceny chcesz zobaczyc ksiazki: ";
            cin >> cena;
            cout << "Znalezione ksiazki:\n";
            KsiazkiCena(ksiazki, &cena);
            break;
        case 3:
            cout << "Podaj od jakiego wydawnictwa chcesz zobaczyc ksiazki: ";
            cin >> wydawnictwo;
            cout << "Znalezione ksiazki:\n";
            KsiazkiWydawnictwo(ksiazki, &wydawnictwo);
            break;
            //jak nie ma poprawnej deklaracji, czyli podanie czegoś czego nie ma
        default:
            break;
        }
        cout << endl << endl;
    }while(wybor != 0);
	//!różny niż zero, while musi być bo inaczej nie chce działać, wybór musi być różny od zera (1-3), inaczej nie działa
    return(0);
}
//ksiazki1-tablica pusta, bo zbiera info od nas, wskaźnik pobiera
void KsiazkiRok(Ksiegarnia ksiazki1[], short *rok1){
    bool checkRok = false; //sprawdza czy rok dobry, nie true bo wtedy nie wyświetli "brak ksiazki"
    for( short i = 0; i < 8; i++ ) { //i to któryś rok który wybierzemy
        if(ksiazki1[i].rok >= *rok1){ //jesli wartosc ktorą podamy będzie większa lub równa danej dacie to wyświetli resztę danych w odpowiedniej kolejności
            cout << "Tytul:" << ksiazki1[i].tytul;
            cout << "\tAutor:" << ksiazki1[i].autor; //\t oznacza że będzie wpisane obok (tak jak \n daje na dół)
            cout << "\tRok:" << ksiazki1[i].rok;
            cout << "\tWydawnictwo:" << ksiazki1[i].wydawnictwo;
            cout << "\tCena:" << ksiazki1[i].cena;
            cout << endl; 
            checkRok = true;
        }
    }
    if(checkRok == false) //jeśli nie wprowadzimy odpowiedniej wartości to wyświetli, że nie ma
        cout << "Brak ksiazki";
}

void KsiazkiCena(Ksiegarnia ksiazki1[], float *cena1){
    bool checkCena = false;
    for( short i = 0; i < 8; i++ ) {
        if(ksiazki1[i].cena >= *cena1){
            cout << "Tytul:" << ksiazki1[i].tytul;
            cout << "\tAutor:" << ksiazki1[i].autor;
            cout << "\tRok:" << ksiazki1[i].rok;
            cout << "\tWydawnictwo:" << ksiazki1[i].wydawnictwo;
            cout << "\tCena:" << ksiazki1[i].cena;
            cout << endl;
            checkCena = true;
        }
    }
    if (checkCena == false)
        cout << "Brak ksiazki";
}

void KsiazkiWydawnictwo(Ksiegarnia ksiazki1[], string *wydawnictwo1){
    bool checkWydawnictwo;
    for( short i = 0; i < 8; i++ ) {
        if(ksiazki1[i].wydawnictwo == *wydawnictwo1){
            cout << "Tytul:" << ksiazki1[i].tytul;
            cout << "\tAutor:" << ksiazki1[i].autor;
            cout << "\tRok:" << ksiazki1[i].rok;
            cout << "\tWydawnictwo:" << ksiazki1[i].wydawnictwo;
            cout << "\tCena:" << ksiazki1[i].cena;
            cout << endl;
            checkWydawnictwo = true;
        }
    }
    if (checkWydawnictwo == false)
        cout << "Brak ksiazki";
}