#include "luottotili.h"
#include <iostream>

Luottotili::Luottotili(const std::string& nimi, double luottoRaja)
    : Pankkitili(nimi), luottoRaja(luottoRaja){
    saldo = luottoRaja;
    std::cout<<"Luottotili luotu "<< nimi <<":lle, luottoraja "<< luottoRaja <<std::endl;
}

bool Luottotili::deposit(double maara, bool suppressOutput) {
    if (maara <= 0 || (saldo + maara) > 0) return false;
    saldo += maara;
    if (!suppressOutput) {
        std::cout<<"Luottotili: talletus "<<maara<<" tehty, luottoa jaljella "<< (saldo + luottoRaja) <<std::endl;
    }
        return true;
}
bool Luottotili::withdraw(double maara, bool suppressOutput) {
    if (maara <= 0 || (saldo - maara) < -luottoRaja) return false;
    saldo -= maara;
    if (!suppressOutput) {
    std::cout<<"Luottotili: nosto "<<maara<<" tehty, luottoa jaljella "<< (saldo + luottoRaja) <<std::endl;
    }
        return true;
}
