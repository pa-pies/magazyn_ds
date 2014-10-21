#ifndef STANOWISKO_MAGAZYNOWE_H
#define STANOWISKO_MAGAZYNOWE_H

#include "item.h"

class Stanowisko_Magazynowe
{

protected:

    bool zajete;

public:

    Stanowisko_Magazynowe();
    Stanowisko_Magazynowe(Stanowisko_Magazynowe& kopia);
    void zajmij();
    void zwolnij();
    bool czyZajete();

    void przydziel_item(Item*);

};

#endif // STANOWISKO_MAGAZYNOWE_H
