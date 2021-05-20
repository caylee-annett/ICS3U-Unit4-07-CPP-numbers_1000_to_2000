// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program prints the numbers 1000 to 2000 with five integers per line

#include <iostream>

int main() {
    // This function prints the numbers
    int loopCounter;

    // Process & Output
    std::cout << "This program prints the integers from 1000 to 2000."
        << std::endl;
    std::cout << "" << std::endl;
    for (loopCounter = 1000; loopCounter < 2000 + 1; loopCounter++) {
        if (loopCounter % 5 == 4) {
            std::cout << loopCounter << " " << std::endl;
        } else {
            std::cout << loopCounter << " ";
        }
    }
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
