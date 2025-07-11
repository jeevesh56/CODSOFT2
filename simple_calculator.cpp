#include <iostream>

int main() {
    double num1, num2;
    char op;

    // Display a welcome message
    std::cout << "Simple Calculator\n";

    // Get first number
    std::cout << "Enter first number: ";
    std::cin >> num1;

    // Get operator
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    // Get second number
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Perform calculation based on operator
    if (op == '+') {
        std::cout << "Result: " << (num1 + num2) << std::endl;
    } else if (op == '-') {
        std::cout << "Result: " << (num1 - num2) << std::endl;
    } else if (op == '*') {
        std::cout << "Result: " << (num1 * num2) << std::endl;
    } else if (op == '/') {
        if (num2 != 0) {
            std::cout << "Result: " << (num1 / num2) << std::endl;
        } else {
            std::cout << "Error: Cannot divide by zero." << std::endl;
        }
    } else {
        std::cout << "Invalid operator." << std::endl;
    }

    return 0;
} 