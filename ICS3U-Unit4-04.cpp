// Copyright (c) 2022 Emmanuel Fofeyin All rights reserved.

// Created by : Emmanuel Fofeyin
// Created on : Oct 2022
// This program is a number guessing game
// Using break statements.

#include <iostream>
#include <random>
#include <string>

int main() {
    // creating variables

    std::string guessedNumberAsString;
    int randomNumber;
    int guessedNumberAsNumber;

    // random generator
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);

    // input
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> guessedNumberAsString;

    // process and output
    try {
        guessedNumberAsNumber = std::stoi(guessedNumberAsString);
        while (true) {
            if (guessedNumberAsNumber == randomNumber) {
                std::cout << "You guessed correctly!" << std::endl;
            } else if (guessedNumberAsNumber != randomNumber) {
                std::cout << "\nYou guessed incorrectly, the number was "
                << randomNumber << std::endl;
                break;
            }
        }
     }catch (std::invalid_argument) {
        std::cout << "\nNot good, "
        << guessedNumberAsString << " is not an integer.";
    }
    std::cout << "\nThanks for playing.";
    std::cout << "\n\nDone.";
  
}
