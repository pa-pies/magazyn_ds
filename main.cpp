#include <iostream>
#include <vector>
#include <string>

#include "magazyn.h"
#include "item.h"
#include "mediator.h"
#include "request_parser.h"
#include "wielka_ksiega_itemow.h"

using namespace std;


int main()
{
    cout <<  "Symulator magazynu wita." << endl;

    Magazyn* nasz_magazyn = new Magazyn(100,3);

    cout << "Stanowisk roboczych w magazynie: " <<  nasz_magazyn->stanowiska.size()<< endl;

    Wielka_Ksiega_Itemow* baza_itemow = new Wielka_Ksiega_Itemow();
    Request_Parser* parserek = new Request_Parser();
    string plik_wejsciowy = "itemy.xml";
    parserek->pobierzPlik(plik_wejsciowy);
    cout << "Nasza zawartosc pliku wejsciowego:" << endl;
    parserek->pokazPlik();
    parserek->pokazNazwyItemow();

    Mediator* mediator = new Mediator(baza_itemow, nasz_magazyn, parserek);

    string komunikat_mediatora;
    while (komunikat_mediatora!="Brak dalszych itemow.")
    {
        komunikat_mediatora = mediator->deponujNastepnyItem();
        cout << komunikat_mediatora << endl;
    }

    return 0;
}
