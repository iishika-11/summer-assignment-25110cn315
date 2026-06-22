#include <iostream>
using namespace std;

int main() {
    int number = 57;   // fixed number
    int guess;

    cout << "Guess the number (1 to 100):\n";

    do {
        cin >> guess;

        if (guess > number)
            cout << "Too high! Try again.\n";
        else if (guess < number)
            cout << "Too low! Try again.\n";
        else
            cout << "Correct! You guessed it.\n";

    } while (guess != number);

    return 0;
}