#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H

#include "seuraaja.h"

class Notifikaattori
{
public:
    Notifikaattori();
    ~Notifikaattori();

    void lisaa(Seuraaja* seuraaja);
    void poista(Seuraaja* seuraaja);
    void tulosta();
    void postita(string viesti);

private:
    Seuraaja* seuraajat = nullptr;
};

#endif // NOTIFIKAATTORI_H
