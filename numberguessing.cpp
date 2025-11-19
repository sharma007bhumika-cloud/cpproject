#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

int main() {
    srand(time(0));                // Seed the random number generator
    int secret = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "===== Number Guessing Game =====\n";
    cout << "Guess a number between 1 and 100\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secret) {
            cout << "Too high! Try again.\n";
        } else if (guess < secret) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "🎉 Correct! You guessed the number in " 
                 << attempts << " attempts.\n";
        }

    } while (guess != secret);

    return 0;
}
