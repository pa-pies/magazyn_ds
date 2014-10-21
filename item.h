#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item
{
public:
    Item(string n, unsigned int r, unsigned int c);
    string nazwa;
    unsigned int rozmiar;
    unsigned int czas;
};

#endif // ITEM_H
