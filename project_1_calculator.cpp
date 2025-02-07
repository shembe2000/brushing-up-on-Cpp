// Project 1: Simple Calculator.
// Demonstrates use of: variables, data types, arithmetic operators, loops, if-else and switch statements.

#include <iostream>


int main() {
    std::cout << "=================================\n";
    std::cout << "|       SIMPLE CALCULATOR       |\n";
    std::cout << "=================================\n";
    std::cout << "Menu:\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "0. Exit program\n\n";

    std::cout << "Select an option: ";
    int option;
    std::cin >> option;

    do {
        double num1, num2;
        std::cout << "\nEnter 1st number: ";
        std::cin >> num1;
        std::cout << "Enter 2nd number: ";
        std::cin >> num2;

        switch (option) {
            case 1:  // addition
                std::cout << "Ans: (" << num1 << " + " << num2 << ") = " << num1 + num2 << '\n';
                break;
            case 2:  // subtraction
                std::cout << "Ans: (" << num1 << " - " << num2 << ") = " << num1 - num2 << '\n';
                break;
            case 3:  // multiplication
                std::cout << "Ans: (" << num1 << " * " << num2 << ") = " << num1 * num2 << '\n';
                break;
            case 4:  // division
                num2 == 0 ? std::cout << "Can't divide by 0..." : std::cout << "Ans: (" << num1 << " / " << num2 << ") = " << num1 / num2 << '\n';
                break;
            default:
                std::cout << "\nInvalid.";
                break;
        }

        // print the menu again
        std::cout << "\n=================================\n";
        std::cout << "|       SIMPLE CALCULATOR       |\n";
        std::cout << "=================================\n\n";
        std::cout << "Menu:\n";
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Division\n";
        std::cout << "0. Exit program\n\n";

        std::cout << "Select an option: ";
        std::cin >> option;
    } while (option != 0);

    std::cout << std::endl;

    return 0;
}
