#include "wielka_ksiega_itemow.h"

Wielka_Ksiega_Itemow::Wielka_Ksiega_Itemow()
{
    this->mapa.clear();

    this->mapa["book"] = new Item("book",3,2);
    this->mapa["bike"] = new Item("bike",20,10);
    this->mapa["furniture"] = new Item("furniture",60,25);
}

Item* Wielka_Ksiega_Itemow::getItem(string nazwa)
{
    return this->mapa.at(nazwa);
}

void Wielka_Ksiega_Itemow::addItem(Item* i)
{
    this->mapa[i->nazwa]=i;
}

