#include <iostream>
#include <string>
int main() {
    std::string userName;
    //Prompt user for their name
    std::cout << "Please enter your name: ";
    //Read user input including spaces
    std::getline(std::cin, userName);
    //Output a friendly greeting
    std::cout << "Hello, " << userName << "!" << std::endl;
    return 0;
}