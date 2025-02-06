#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <string>
#include <iostream>

using namespace std;

class Seuraaja
{
public:
    Seuraaja* next = nullptr;
    Seuraaja (string nimi);
    string getNimi();
    void paivitys (string viesti);

private:
    string nimi;
};

#endif // SEURAAJA_H
