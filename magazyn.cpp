#include <vector>
#include <iostream>
#include <string>

#include "magazyn.h"

using namespace std;


Magazyn::Magazyn(int capacity, int stanowiska)
{
    this->ustawPojemnosc(capacity);
    this->ustawStanowiska(stanowiska);
    this->update();

}

void Magazyn::ustawPojemnosc(int capacity)
{
    this->pojemnosc = capacity;
}

void Magazyn::ustawStanowiska(int ile)
{
    this->stanowiska.clear();
    for (int i=0;i<ile;i++)
    {
        this->stanowiska.push_back(new Stanowisko_Magazynowe);
    }
}

int Magazyn::getPojemnosc()
{
    return this->pojemnosc;
}

int Magazyn::getZajetosc()
{
    return this->zajetosc;
}

int Magazyn::getWolneMiejsce()
{
    return this->wolne_miejsce;
}

int Magazyn::ileStanowisk()
{
    return this->stanowiska.size();
}

std::vector <bool> Magazyn::zajetosc_stanowisk()
{
    std::vector <bool> zajetosci = std::vector<bool>();
    for (int i=0; i< this->stanowiska.size();i++)
    {
        zajetosci.push_back(stanowiska[i]->czyZajete());
    }

    return zajetosci;
}

string Magazyn::przyjmijItem(Item* i)
{
    cout << "Probujemy przyjac item typu: " << i->nazwa << endl;
    if (i->rozmiar > this->wolne_miejsce) return "Obiekt za duzy, odrzucamy";
    else
    {

        this->itemy.push_back(i);
        this->update();
        return "Obiekt sie zmiescil";
    }
}

void Magazyn::update()
{
    this->zajetosc=0;
    for (int i=0; i<this->itemy.size();i++)
    {
        this->zajetosc+=itemy.at(i)->rozmiar;
    }
    this->wolne_miejsce = this->pojemnosc - this->zajetosc;


    cout<<"Wolne miejsce: " << this->wolne_miejsce << ", przedmiotow: "<< this->itemy.size() <<endl;

    if (this->wolne_miejsce == 0)
    {
        cout << "Brak miejsca w magazynie" << endl;
        this->itemy.clear();
        int s = this->stanowiska.size();
        this->stanowiska.clear();
        this->wolne_miejsce = this->pojemnosc;
        for (int i=0;i<s;i++)
        {
            this->stanowiska.push_back(new Stanowisko_Magazynowe);
        }

    }
}


