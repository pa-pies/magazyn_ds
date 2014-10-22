#include "mediator.h"

Mediator::Mediator(Wielka_Ksiega_Itemow* wki, Magazyn* m, Request_Parser* rp)
{
    this->ksiega = wki;
    this->magazyn = m;
    this->parser = rp;
}

string Mediator::deponujNastepnyItem()
{
    string nazwa_itemu;
    string komunikat_magazynu;
    if (parser->nazwy_itemow.size()==0) return "Brak dalszych itemow.";
    else
    {
        nazwa_itemu = parser->nazwy_itemow.at(0);
        parser->nazwy_itemow.erase(parser->nazwy_itemow.begin());
        komunikat_magazynu = magazyn -> przyjmijItem(ksiega->getItem(nazwa_itemu));
    }
    return komunikat_magazynu;
}
