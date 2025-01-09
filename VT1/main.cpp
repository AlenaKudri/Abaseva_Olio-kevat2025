#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int maxnum);

int main() {
    int maxnum = 40;
    int arvaus = game(maxnum);

    std::cout << "Arvausten maara: " << arvaus << std::endl;
    return 0;
}

int game(int maxnum) {
    int luku;
    int arvaus = 0;

    std::srand(static_cast<unsigned int>(std::time(0)));

    int satunnaisluku = std::rand() % maxnum + 1;

    do {
        std::cout << "Arvaa luku (1-" << maxnum << "): ";
        std::cin >> luku;

        arvaus++;

        if (luku > satunnaisluku) {
            std::cout << "Luku on suurempi" << std::endl;
        } else if (luku < satunnaisluku) {
            std::cout << "Luku on pienempi" << std::endl;
        } else {
            std::cout << "Oikea vastaus!" << std::endl;
        }

    } while (luku != satunnaisluku);

    return arvaus;
}
