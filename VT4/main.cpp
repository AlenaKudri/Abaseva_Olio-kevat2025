#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"
#include <string>

int main()
{
    Asiakas aapeli("Aapeli", 1000);
    aapeli.showSaldo();
    std::cout<<std::endl;

    aapeli.tallenus(250, false);
    aapeli.luotonNosto(150, false);
    aapeli.showSaldo();
    std::cout<<std::endl;

    Asiakas bertta("Bertta", 1000);
    bertta.showSaldo();
    std::cout<<std::endl;

    aapeli.tiliSiirto(50, bertta);

    return 0;
}
