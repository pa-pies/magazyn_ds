#include "stanowisko_magazynowe.h"

Stanowisko_Magazynowe::Stanowisko_Magazynowe()
{
    this->zwolnij();
}

void Stanowisko_Magazynowe::zajmij()
{
    this->zajete = true;
}

void Stanowisko_Magazynowe::zwolnij()
{
    this->zajete = false;
}

bool Stanowisko_Magazynowe::czyZajete()
{
    return this->zajete;
}
