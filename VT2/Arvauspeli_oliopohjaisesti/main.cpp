#include "Game.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int maxNumber = 10;
    Game game(maxNumber);
    game.play();
    return 0;
}
