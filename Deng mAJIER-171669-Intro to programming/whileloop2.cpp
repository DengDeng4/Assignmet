#include <iostream>
using namespace std;

int main() {
    int number = 12; // Starting number

    while (number <= 28) {
        cout << number << " "; // Output the current number
        number += 2;           // Increment by 2
    }

    cout << endl; // End the line after output
    return 0;
}