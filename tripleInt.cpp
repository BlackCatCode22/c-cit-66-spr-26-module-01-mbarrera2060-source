#include <iostream>
int main() {
    int input_number;
    //Prompt the user for an integer
    std::cout << "Enter an integer: ";

    //Read the integer from standard input
    std::cin >>input_number;

    //Calculate the double value
    int triple_number = input_number *3;

    //Output the result
    std::cout << triple_number << std::endl;
    return 0;
}