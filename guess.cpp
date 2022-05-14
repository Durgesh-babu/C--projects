#include <iostream>
using namespace std;

int main(void) {
    int guess, number = 6, guesscount = 1;
    bool outofguess = false;

    while (guess != number && !outofguess) {
        if (guesscount <= 5) {
        cout << "Enter the number: ";
        cin >> guess;
        guesscount++;
        } else {
            outofguess = true;
        }
    }

    if (outofguess) {
        cout << "You lost!";
    } else {
        cout << "You win!";
    }
    return 0;
}