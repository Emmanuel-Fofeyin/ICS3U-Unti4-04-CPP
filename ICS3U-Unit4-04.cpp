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

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);
    try {
        while (true) {
            std::cout << std::endl;
            std::string guessedNumberAsNumber;
            std::cout << "Enter a number between 0 and 9: ";
            std::cin >> guessedNumberAsNumber;
            std::cout << std::endl;
            guessedNumberAsNumber = std::stoi(guessedNumberAsString);
            if (guessedNumberAsNumber == randomNumber) {
                std::cout << "You guessed correctly!";
                std::cout << std::endl;
                std::cout << "The number was " << randomNumber << ".";
                std::cout << std::endl;
                break;
            } else if (guessedNumberAsNumber > randomNumber) {
                std::cout << guessedNumberAsNumber << " is higher than the random number.";
            } else if (guessedNumberAsNumber < randomNumber) {
                std::cout << guessedNumberAsNumber << " is lower than the random number.";
            }
            std::cout << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nNot good " << guessedNumberAsNumber << "input isn't an integer.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << ("Thanks for playing.") << std::endl;
    std::cout << ("Done.") << std::endl;
}
