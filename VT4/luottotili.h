#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include <string>
#include "Pankkitili.h"

class Luottotili : public Pankkitili
{
public:
    Luottotili(const std::string& nimi, double luottoRaja);
    bool deposit(double maara, bool suppressOutput) override;
    bool withdraw(double maara, bool suppressOutput) override;

protected:
    double luottoRaja;
};

#endif // LUOTTOTILI_H

