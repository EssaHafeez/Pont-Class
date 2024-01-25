#include <iostream>

int main() {
    char operation;
    double num1, num2, result;

    // Input
    std::cout << "Enter operation (+ for addition, - for subtraction): ";
    std::cin >> operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Perform operation
    if (operation == '+') {
        result = num1 + num2;
        std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
    } else if (operation == '-') {
        result = num1 - num2;
        std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
    } else {
        std::cout << "Invalid operation. Please use + for addition or - for subtraction." << std::endl;
    }

    void Division()
    {
        
    }

    return 0;
}
