#include "notifikaattori.h"

Notifikaattori::Notifikaattori(): seuraajat (nullptr){
    cout<<"Luodaan notifikaattori"<<endl;
}

Notifikaattori::~Notifikaattori(){

}

void Notifikaattori::lisaa(Seuraaja* seuraaja){
    seuraaja->next = seuraajat;
    seuraajat = seuraaja;
    cout<<"Notifikaattori lisaa seuraajan "<<seuraaja->getNimi()<<endl;
}

void Notifikaattori::poista(Seuraaja* seuraaja){
    Seuraaja* nykyinen = seuraajat;
    Seuraaja* edellinen = nullptr;

    while (nykyinen != nullptr) {
        if (nykyinen == seuraaja) {
            if (edellinen == nullptr){
                seuraajat = nykyinen->next;
            } else{
                edellinen->next = nykyinen->next;
            }
            cout << "Notifikaattori poistaa seuraajan " << seuraaja->getNimi() << endl;
            return;
        }
        edellinen = nykyinen;
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::tulosta() {
    Seuraaja* nykyinen = seuraajat;
    cout<<"Notifikaattori seuraajat:"<<endl;

    while (nykyinen != nullptr) {
        cout<< "Seuraaja "<< nykyinen->getNimi()<< endl;
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::postita(string viesti){
    Seuraaja* nykyinen = seuraajat;

    cout<<"Notifikaattori postaa viestin "<< viesti<<endl;
    while (nykyinen != nullptr) {
        nykyinen->paivitys(viesti);
        nykyinen = nykyinen->next;
    }
}
