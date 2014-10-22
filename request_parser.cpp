#include <iostream>
#include <fstream>
#include <sstream>
#include "request_parser.h"

using namespace std;

Request_Parser::Request_Parser()
{
}

void Request_Parser::pobierzPlik(string input_file)
{
    this->linijki.clear();
    this->z_pliku.clear();
    this->nazwy_itemow.clear();

    ifstream strumien_wejsciowy(input_file.c_str());

    string linijka;
    while (getline(strumien_wejsciowy, linijka))
    {
        linijki.push_back(linijka);
        z_pliku+=linijka;
        z_pliku+="\n";
    }
    strumien_wejsciowy.close();
    int start_position, end_position;
    string extracted="";

    for (int i=0;i<this->linijki.size();i++)
    {
        start_position = 0;
        end_position = 0;

        start_position = linijki.at(i).find_first_of("\"");
        if (start_position != -1)
        {
            ++start_position;
            end_position = linijki.at(i).find_last_of("\"");
            if (end_position != -1)
            {
                extracted = linijki.at(i).substr(start_position, end_position - start_position);
            }
        }

        if (extracted!="") nazwy_itemow.push_back(extracted);
    }
//TODO: dlaczego podwaja ostatni?
if (nazwy_itemow.size()>1) nazwy_itemow.pop_back();

}
void Request_Parser::pokazPlik()
{
    cout << this->z_pliku << endl;
}

void Request_Parser::pokazNazwyItemow()
{
    for (int i=0;i<this->nazwy_itemow.size();i++)
    {
        cout << nazwy_itemow.at(i) << endl;
    }
}
