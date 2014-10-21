#ifndef MAGAZYN_H
#define MAGAZYN_H

class Magazyn
{
protected:
    class Stanowisko_Magazynowe;
    int pojemnosc;


public:
    Magazyn();
    Magazyn(int capacity);

    void ustawPojemnosc(int capacity);


};

#endif // MAGAZYN_H
