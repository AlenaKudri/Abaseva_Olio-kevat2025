#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "Pankkitili.h"
#include "Luottotili.h"
#include <string>
#include <iostream>

class Asiakas
{
public:
    Asiakas(const std::string& nimi, double luottoRaja);
    std::string getNimi();
    void showSaldo();
    bool tallenus(double maara, bool suppressOutput);
    bool nosto(double maara, bool suppressOutput);
    bool luotonMaksu(double, bool suppressOutput);
    bool luotonNosto(double, bool suppressOutput);
    bool tiliSiirto(double, Asiakas &);

private:
    std::string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
};

#endif // ASIAKAS_H
