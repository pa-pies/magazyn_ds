#ifndef MAGAZYN_H
#define MAGAZYN_H

#include <vector>

#include "stanowisko_magazynowe.h"

using namespace std;

class Magazyn
{
protected:
    unsigned int pojemnosc;
    unsigned int zajetosc;
    unsigned int wolne_miejsce;

    void update();
    void ustawPojemnosc(int capacity);
    void ustawStanowiska(int stanowiska);


public:

    Magazyn();
    Magazyn(int capacity);
    Magazyn(int capacity, int stanowiska);

    vector <Stanowisko_Magazynowe * > stanowiska;

    int getPojemnosc();
    int getZajetosc();
    int getWolneMiejsce();
    int ileStanowisk();
    vector <bool> zajetosc_stanowisk();
    vector <Item*> itemy;
    string przyjmijItem(Item* i);


};

#endif // MAGAZYN_H
