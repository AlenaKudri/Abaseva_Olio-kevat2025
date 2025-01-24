#include "chef.h"
#include "italianchef.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    string chefName;
    cout << "Enter the name of the Chef: ";
    cin >> chefName;
    Chef chef(chefName);

    string isItalian;
    cout << "Is this an Italian Chef (y/n)? ";
    cin >> isItalian;

    if (isItalian == "y") {
        ItalianChef italianChef(chefName);

        int ingredientsForSalad, ingredientsForSoup;
        cout << "Enter ingredients for salad: ";
        cin >> ingredientsForSalad;
            if (ingredientsForSalad > 0) {
                chef.makeSalad(ingredientsForSalad);
            }

        cout << "Enter ingredients for soup: ";
        cin >> ingredientsForSoup;
            if (ingredientsForSoup>0){
             chef.makeSoup(ingredientsForSoup);
            }

        string inputPassword;
        cout << "Enter password: ";
        cin >> inputPassword;

        if (italianChef.askSecret(inputPassword, 0, 0)) {
            int flourAmount, waterAmount;
            cout << "Enter amount of flour: ";
            cin >> flourAmount;

            cout << "Enter amount of water: ";
            cin >> waterAmount;

            italianChef.askSecret(inputPassword, flourAmount, waterAmount);
        }
    }
    else {
        Chef chef(chefName);

        int ingredientsForSalad;
        cout << "Enter ingredients for salad: ";
        cin >> ingredientsForSalad;
        if (ingredientsForSalad > 0) {
            chef.makeSalad(ingredientsForSalad);
        }

        int ingredientsForSoup;
        cout << "Enter ingredients for soup: ";
        cin >> ingredientsForSoup;
        if (ingredientsForSoup > 0) {
            chef.makeSoup(ingredientsForSoup);
        }
    }

    return 0;
}

