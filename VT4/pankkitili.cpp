#include "pankkitili.h"
#include <iostream>

Pankkitili::Pankkitili(const std::string& nimi)
    : omistaja(nimi), saldo(0) {
    std::cout<<"Pankkitili luotu "<<omistaja<<":lle"<<std::endl;
}

bool Pankkitili::deposit(double maara, bool suppressOutput) {
    if (maara <= 0) return false;
    saldo += maara;

    if (!suppressOutput) {
        std::cout<<"Pankkitili: talletus "<<maara<<" tehty"<<std::endl;
    }
    return true;
}
bool Pankkitili::withdraw(double maara, bool suppressOutput) {
    if (maara <= 0 || maara > saldo) return false;
    saldo -= maara;

    if (!suppressOutput) {
        std::cout<<"Pankkitili: nosto "<<maara<<" tehty"<<std::endl;
    }
    return true;
}

double Pankkitili::getBalance(){
    return saldo;
}

