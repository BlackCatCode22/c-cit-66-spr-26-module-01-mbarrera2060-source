#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    //Prompt user for input
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    //Calculate the sum
    int sum = num1 + num2;
    //Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
    return 0;
}