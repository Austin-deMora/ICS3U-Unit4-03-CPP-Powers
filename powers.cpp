// Copyright (c) 2021 Austin de Mora All rights reserved.
//
// Created by: Austin de Mora
// Created on: Sep 2019
// This program finds the squares of all the numbers from
// the inputted number to 0

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // this function checks if you are old enough
    std::string positiveintegerstring;
    int number;
    int number_sum = 1;
    int loopcounter = 1;

    // input
    std::cout << "Enter the positive integer you chose: ";
    std::cin >> positiveintegerstring;
    std::cout << "" << std::endl;

    // process & output
    try {
        number = std::stoi(positiveintegerstring);
        if (number < 0) {
            throw std::invalid_argument("This wasn't an integer");
    }

        for (loopcounter = 0; loopcounter < number + 1; loopcounter++) {
            number_sum = pow(loopcounter, 2);
            std::cout << loopcounter << "^2 = " << number_sum <<
            std::endl;
        }
    } catch (std::invalid_argument) {
        // output
        std::cout << "That was not a valid integer" << std::endl;
    }
}
