#include <iostream>

int main() {
    // A string variable initialized to "HI THIS IS BRAIN".
    std::string myString = "HI THIS IS BRAIN";

    // stringPTR: A pointer to the string.
    std::string* stringPTR = &myString;

    // stringREF: A reference to the string.
    std::string& stringREF = myString;

    // Print memory addresses
    std::cout << "Memory address of the string variable: " << &myString << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    // Print values
    std::cout << "Value of the string variable: " << myString << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}