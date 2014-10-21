#include <iostream>

#include "magazyn.h"
#include "item.h"
#include "mediator.h"
#include "request_parser.h"
#include "wielka_ksiega_itemow.h"


int main()
{
    std::cout <<  "Symulator magazynu wita." << std::endl;

    Magazyn nasz_magazyn = new Magazyn();

    return 0;
}
