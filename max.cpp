// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program checks if the entered number is the same as random number

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <random>

float maxCalculator(int inputList[]) {
    // Creating the variables
    int currentMax = 0;
    int counter = 0;
    int isItMax = 0;
    // Process
    currentMax = inputList[0];
    for (counter = 0; counter < 5; counter++) {
        isItMax = inputList[counter];
        if (isItMax > currentMax) {
            currentMax = isItMax;
        }
    }
    return currentMax;
}

main() {
    // This function checks if the entered number is the same as random number
    int numberInput = 0;
    std::string numberInputStr;
    int maxNumber = 0;
    int numberRandom;
    int listNumber[5];

    // Process
    std::cout << "enter 5 numbers and see which one is the max\n" << std::endl;
    for (int numberOfNumbers = 0; numberOfNumbers < 5; numberOfNumbers ++) {
        std::cout << "Enter the number: ";
        std::cin >> numberInputStr;
        if (numberInputStr == "") {
            std::cout << "YOU CANT LEAVE THE AREA EMPTY" << std::endl;
            return 0;
        }
        try {
            numberInput = std::stoi(numberInputStr);
        } catch(std::invalid_argument) {
            std::cout << "Wrong input!!!" << std::endl;
            return 0;
        }
        listNumber[numberOfNumbers] = numberInput;
    }
    // Pass the input to another function
    maxNumber = maxCalculator(listNumber);
    // Output
    std::cout << "\n" << maxNumber << std::endl;
}
