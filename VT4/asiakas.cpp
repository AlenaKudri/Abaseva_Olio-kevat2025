#include "asiakas.h"
#include <iostream>

Asiakas::Asiakas(const std::string& nimi, double luottoRaja)
    : kayttotili(nimi), luottotili(nimi, luottoRaja), nimi (nimi) {
    std::cout<<"Asiakkuus luotu "<<nimi<<std::endl;
}
void Asiakas::showSaldo()
{
    std::cout<<"Kayttotilin saldo "<<kayttotili.getBalance()<<std::endl;
    std::cout<<"Luottotilin saldo "<<luottotili.getBalance()<<std::endl;
}

bool Asiakas::tallenus(double maara, bool suppressOutput)
{
    return kayttotili.deposit(maara, suppressOutput);
}

bool Asiakas::nosto(double maara, bool suppressOutput)
{
    return kayttotili.withdraw(maara, suppressOutput);
}

bool Asiakas::luotonMaksu(double maara, bool suppressOutput)
{
    return luottotili.deposit(maara, suppressOutput);
}
bool Asiakas::luotonNosto(double maara, bool suppressOutput)
{
    return luottotili.withdraw(maara, suppressOutput);
}
std::string Asiakas::getNimi()
{
    return nimi;
}

bool Asiakas::tiliSiirto(double maara, Asiakas& siirtonimi)
{
    if (maara <= 0 || maara > kayttotili.getBalance()) return false;

    std::cout << getNimi() << std::endl;
    showSaldo();

    kayttotili.withdraw(maara, true);

    std::cout<< "Pankkitili: "<< getNimi() << " siirtaa " << maara << " " << siirtonimi.getNimi() << ":lle" << std::endl;
    std::cout<<getNimi()<< " Pankkitili: nosto "<<maara<< " tehty"<<std::endl;

    siirtonimi.tallenus(maara, true);
    std::cout<< siirtonimi.getNimi() << " Pankkitili: talletus "<<maara<< " tehty"<<std::endl;

    std::cout<< siirtonimi.getNimi() << std::endl;
    siirtonimi.showSaldo();

    return siirtonimi.tallenus(maara, true);
}

