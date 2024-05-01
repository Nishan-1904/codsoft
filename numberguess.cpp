#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int lowerBound, upperBound, randomNumber, userGuess;

    cout << "Enter the lower bound: ";
    cin >> lowerBound;
    cout << "Enter the upper bound: ";
    cin >> upperBound;

    srand(time(0)); // seed the random number generator
    randomNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;

    cout << "Guess the number between " << lowerBound << " and " << upperBound << ".\n";

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again.\n";
        }
    } while (userGuess != randomNumber);

    cout << "Congratulations! You guessed the number.\n";

    return 0;
}