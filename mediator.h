#ifndef MEDIATOR_H
#define MEDIATOR_H

#include "wielka_ksiega_itemow.h"
#include "magazyn.h"
#include "request_parser.h"

class Mediator
{

protected:

    Wielka_Ksiega_Itemow* ksiega;
    Magazyn* magazyn;
    Request_Parser* parser;

public:

    Mediator(Wielka_Ksiega_Itemow* wki, Magazyn* m, Request_Parser* rp);
    string deponujNastepnyItem();
};

#endif // MEDIATOR_H
