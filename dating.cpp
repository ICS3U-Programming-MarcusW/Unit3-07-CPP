// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Marcus Wehbi
// Created on: Oct 2022
// This program asks the user for their age
// It then displays if they can date my grandchild

#include <iomanip>
#include <iostream>

int main() {
    // this function tells you if you can date my grandchild
    // declare constants for the minimum and maximum age
    const int MAX_AGE = 40;
    const int MIN_AGE = 25;
    // declare users age as a string
    std::string userAgeString;
    // declare variable for users age as an integer
    int userAgeInt;
    // get the users age with input
    std::cout << "Enter your age: ";
    std::cin >> userAgeString;

    try {
        // Convert string to integer
        userAgeInt = std::stoi(userAgeString);
        // boolean expression - must be between 25 and 40
        if (userAgeInt > MIN_AGE && userAgeInt < MAX_AGE) {
            // If the expression is true, tell them they can date my grandchild
            std::cout << "You can date my grandchild.\n";
        } else {
            // If it is false, tell them they can't
            std::cout << "You cannot date my grandchild.\n";
        }
    } catch (std::invalid_argument) {
        // if an error is encountered, display that there was an invalid input
        std::cout << "Please enter a valid age.\n";
    }
    // Finally statement - thank the user
    std::cout << "Thank you for being interested in my grandchild.";
}
