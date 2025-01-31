#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <string>
#include <iostream>

class Pankkitili
{
public:
    Pankkitili(const std::string& nimi);
    double getBalance();
    virtual bool deposit(double maara, bool suppressOutput);
    virtual bool withdraw(double maara, bool suppressOutput);

protected:
    std::string omistaja;
    double saldo;
};

#endif // PANKKITILI_H
