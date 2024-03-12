#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed for random number generation
    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess, attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > secretNumber)
            std::cout << "Too high! Try again.\n";
        else if (guess < secretNumber)
            std::cout << "Too low! Try again.\n";
        else
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts!\n";

    } while (guess != secretNumber);

    return 0;
}
