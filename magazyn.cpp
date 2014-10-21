#include "magazyn.h"

Magazyn::ustawPojemnosc(int capacity)
{
    this->pojemnosc = capacity;
}

Magazyn::Magazyn()
{
    this->ustawPojemnosc(100);
}

Magazyn::Magazyn(int capacity)
{
    this->ustawPojemnosc(capacity);
}


