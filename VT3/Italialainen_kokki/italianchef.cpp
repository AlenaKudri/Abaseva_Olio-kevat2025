#include "italianchef.h"

ItalianChef::ItalianChef(string name): Chef(name){
    password="pizza";
    cout << "ItalianChef " << chefName << " konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << chefName << " destruktori" << endl;
}

int ItalianChef::makePizza(int flour, int water) {
    int portions = min(flour / 5, water / 5);
    cout << "ItalianChef " << chefName << " with " << flour << " flour and " << water << " water can make " << portions << " pizzas" << endl;
    return portions;
}

bool ItalianChef::askSecret(string inputPassword, int flour, int water) {
    if (inputPassword.compare(password) == 0) {
        cout << "Password ok!" << endl;
        int pizzas = makePizza(flour, water);
        if (flour > 0 && water > 0) {
            cout << "ItalianChef " << chefName << " with " << flour << " flour and " << water << " water can make " << pizzas << " pizzas" << endl;
        }
                return true;
    } else {
        cout << "Wrong password! Access denied." << endl;
        return false;
    }
}
