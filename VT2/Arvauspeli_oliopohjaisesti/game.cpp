#include "Game.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Game::Game(int maxNum) : maxNumber(maxNum), numOfGuesses(0), playerGuess(0) {
    srand(static_cast<unsigned int>(time(0)));
    randomNumber = rand() % maxNumber + 1;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value" << endl;
}

Game::~Game() {
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play() {
    do {
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess < randomNumber) {
            cout << "Your guess is too small" << endl;
        } else if (playerGuess > randomNumber) {
            cout << "Your guess is too big" << endl;
        }
    } while (playerGuess != randomNumber);

    printGameResult();
}

void Game::printGameResult() {
    cout << "Your guess is right = " << randomNumber << endl;
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << endl;
}

