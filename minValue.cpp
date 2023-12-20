// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Dec/18/2023
// This program generates 10 random numbers
// between 1 and 100. It determines the min number.
// The program uses a list and a For...In loop to achieve this.

// C++ libraries to allow for arrays,
// time-related functions, outputs, and random
// number generation
#include <array>
#include <ctime>
#include <iostream>
#include <random>

// Template declaration that specifies the
// maximum size of the array.
template <size_t N>
// Declaring function that will determine
// the min number in the array of elements.
int FindMinNumber(std::array<int, N> listOfInts) {
    // Declaring variable that will store the min number.
    int minNumber = listOfInts[0];
    // For...In loop to find the minimum value.
    for (int anInteger : listOfInts) {
        // If statement that checks if the random number
        // is less than the minimum number.
        if (anInteger < minNumber) {
            // If the minimum value is less than the random
            // number, assign it as minNumber variable.
            minNumber = anInteger;
        }
    }
    // Return the minimum value to the function.
    return minNumber;
}

int main() {
    // Declaring constants
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUMBER = 0;
    const int MAX_NUMBER = 100;

    // Declaring and initializing an array to store random numbers.
    std::array<int, MAX_ARRAY_SIZE> ranNumbers;

    // Explaining the program to the user.
    std::cout << "This program generates a list of 10 random ";
    std::cout << "numbers between 0 and 100, ";
    std::cout << "and it will determine the smallest number.\n";

    // Generating random numbers and filling the array.
    srand(time(NULL));

    // Using a for loop to propagate 10 random numbers.
    for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        // Assigning randomNumber variable to range from the
        // MIN_NUMBER (0) to the MAX_NUMBER (100).
        int randomNumber =
        (rand() % (MAX_NUMBER - MIN_NUMBER + 1)) + MIN_NUMBER;

        // Assigning the generated random number to the array
        // at the current position.
        ranNumbers[counter] = randomNumber;

        // Displaying the generated random numbers to the user.
        std::cout << "\n"
                  << ranNumbers[counter];
        std::cout << " added to the list at position " << counter;
    }

    // Calling the function FindMinNumber()
    // and assigning it to the variable minUser.
    int minUser = FindMinNumber(ranNumbers);

    // Displaying the min value to the user.
    std::cout << "\nThe minimum value is: " << minUser;
}
