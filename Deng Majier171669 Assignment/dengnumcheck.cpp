#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    

    // Ask user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Determine the maximum number 
    int max;
    switch (true) {
        case num2 < num1:
            max = num1;
            break;
        case num1 < num2:
            max = num2;
            break;
        default:
            max = num1; // If the numbers are equal, assign the first number as the maximum
            break;
    }

    // Output the maximum number
    cout << "The maximum number is: " << max << endl;

    return 0;
}