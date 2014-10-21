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

    Magazyn nasz_magazyn = Magazyn(100,5);

    cout << nasz_magazyn.getPojemnosc() << endl;
    cout << nasz_magazyn.ileStanowisk() << endl;

    nasz_magazyn.stanowiska.at(0)->zajmij();

    cout << nasz_magazyn.zajetosc_stanowisk().at(0) << endl;
    cout << nasz_magazyn.zajetosc_stanowisk().at(1) << endl;

    nasz_magazyn.stanowiska.at(0)->zwolnij();

    cout << nasz_magazyn.zajetosc_stanowisk().at(0) << endl;
    cout << nasz_magazyn.zajetosc_stanowisk().at(1) << endl;

    Wielka_Ksiega_Itemow baza_itemow = Wielka_Ksiega_Itemow();

    cout << baza_itemow.getItem("book")->rozmiar <<endl;
    cout << baza_itemow.getItem("bike")->czas <<endl;

    baza_itemow.addItem(new Item("szaa",6,666));

    cout << baza_itemow.getItem("szaa")->czas <<endl;
    cout << baza_itemow.getItem("szaa")->rozmiar <<endl;


    nasz_magazyn.przyjmijItem(baza_itemow.getItem("szaa"));

    return 0;
}
