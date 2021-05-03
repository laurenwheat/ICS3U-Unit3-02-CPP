// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// This program checks if ther is over 30 students

#include <iostream>

int main() {
    // this function plays the number guessing game
    const int number = 10;
    int numberx;

    // input
    std::cout << "Enter the number: ";
    std::cin >> numberx;
    std::cout << "" << std::endl;

    // process
    if (numberx != 10) {
            // output
            std::cout << "Wrong answer!";}

    if (numberx == 10) {
            std::cout << "Correct!";}
}
