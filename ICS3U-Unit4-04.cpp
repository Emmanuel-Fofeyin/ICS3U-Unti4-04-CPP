// Copyright (c) 2022 Emmanuel Fofeyin All rights reserved.

// Created by : Emmanuel Fofeyin
// Created on : Oct 2022
// This program is a number guessing game
// Using break statements.

#include <iostream>
#include <random>
#include <string>

// creating variables
int randomNumber;
int guessedNumberInt;

int main() {
    // Finds if the chosen number from 0 to 9 is equal to the random number

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);
    try {
        while (true) {
            std::cout << std::endl;
            std::string chosenNumber;
            std::cout << "Enter a number between 0 and 9: ";
            std::cin >> chosenNumber;
            std::cout << std::endl;
            guessedNumberInt = std::stoi(chosenNumber);
            if (guessedNumberInt == randomNumber) {
                std::cout << "You guessed correctly!";
                std::cout << std::endl;
                break;
            } else if (guessedNumberInt > randomNumber) {
                std::cout << guessedNumberInt << " is higher than the random number.";
            } else if (guessedNumberInt < randomNumber) {
                std::cout << guessedNumberInt << " is lower than the random number.";
            }
            std::cout << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nNot good " << guessedNumberInt << "input isn't an integer.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Thanks for playing." << std::endl;
    std::cout << "\nDone." << std::endl;
}
