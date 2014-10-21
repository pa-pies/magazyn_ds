#ifndef WIELKA_KSIEGA_ITEMOW_H
#define WIELKA_KSIEGA_ITEMOW_H

#include "item.h"

#include <vector>
#include <map>
#include <string>

using namespace std;

class Wielka_Ksiega_Itemow
{
public:
    Wielka_Ksiega_Itemow();
    map <string, Item*> mapa;
    Item* getItem(string nazwa);
    void addItem(Item* i);
};

#endif // WIELKA_KSIEGA_ITEMOW_H
