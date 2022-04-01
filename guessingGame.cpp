// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program is a guessing game

#include <iostream>
#include <string>
#include <random>

int main() {
    // this function is a guessing game
    std::string integerAsString;
    int integerAsNumber;
    int randomNumber;

    // input
    std::cout << "Enter a number between 0-9: ";
    std::cin >> integerAsString;
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);
    std::cout << "" << std::endl;

    // process & output
    try {
        integerAsNumber = std::stoi(integerAsString);
        if (integerAsNumber == randomNumber) {
        std::cout << "You guessed it correctly!";
        } else {
        std::cout << "You guessed it incorrectly!";
        }
    } catch (std::invalid_argument) {
        std::cout << "That is not an integer.";
        }
    std::cout << "\nDone." << std::endl;
}
