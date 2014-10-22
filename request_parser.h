#ifndef REQUEST_PARSER_H
#define REQUEST_PARSER_H

#include <vector>
#include <string>
#include <iostream>

#include "item.h"

using namespace std;

class Request_Parser
{
protected:
    string z_pliku;
    vector <string> linijki;

public:
    Request_Parser();
    void pobierzPlik(string input_file);
    void pokazPlik();
    void pokazNazwyItemow();
    vector<string> nazwy_itemow;

};

#endif // REQUEST_PARSER_H
