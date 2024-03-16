#include <iostream>

using namespace std;

//struktura dla uzytkownikow forum
struct Uzytkownicy_DDT //deklaracja struktury
{
    //opis struktur
    string nick;
    string haslo;
    short lp;
    string status;
    string rodzaj_konta;
};

int main()
{
    //Tworzenie obiektu struktury i wypelnianie
    Uzytkownicy_DDT PiotrSzawdynski =
    {
        "PiotrSzawdynski",
        "!@#$%%^",
        1,
        "Aktywny",
        "Admin"
    };
    /*WAZNE dla niektórych kompilatorów należy
    użyć zapisu static Uzytkownicy_DDT PiotrSzawdynski =*/
    Uzytkownicy_DDT Pietrzuch =
    {
        "Pietrzuch",
        "@m@m$@#@",
        24,
        "Aktywny",
        "Moderator"
    };
    /*inny sposób wprowadzania danych do
        obiektu*/
    //tworzenie obiektu
    Uzytkownicy_DDT Piotrus_Pan;
    /*wypełnianie obiektu wartościami dla
        poszczególnych typów danych*/
    Piotrus_Pan.haslo = "PanPiotr";
    Piotrus_Pan.lp = 927;
    Piotrus_Pan.nick = "Piotrus_Pan";
    Piotrus_Pan.rodzaj_konta = "Uzytkownik";
    Piotrus_Pan.status = "zablokowany";
   
    //wyświetlenie obiektów
    cout << "Oto lista uzytkownikow forum DDT"
    << endl << "Nick " << PiotrSzawdynski.nick
    << endl << "Haslo " << PiotrSzawdynski.haslo
    << endl << "Nr usera " << PiotrSzawdynski.lp
    << endl << "Status " << PiotrSzawdynski.status
    << endl << "Rodzaj Konta "
    << PiotrSzawdynski.rodzaj_konta
    << endl
    << endl << "Nick " << Pietrzuch.nick
    << endl << "Haslo " << Pietrzuch.haslo
    << endl << "Nr usera " << Pietrzuch.lp
    << endl << "Status " << Pietrzuch.status
    << endl << "Rodzaj Konta "
    << Pietrzuch.rodzaj_konta
    << endl
    << endl << "Nick " << Piotrus_Pan.nick
    << endl << "Haslo " << Piotrus_Pan.haslo
    << endl << "Nr usera " << Piotrus_Pan.lp
    << endl << "Status " << Piotrus_Pan.status
    << endl << "Rodzaj Konta "
    << Piotrus_Pan.rodzaj_konta;
   
    cin.get();
    return( 0 );
}