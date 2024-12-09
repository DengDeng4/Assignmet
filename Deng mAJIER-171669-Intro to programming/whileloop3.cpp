#include <iostream>
using namespace std;

int main() {
    int start = 20, end = 25; // Range of numbers
    int sum = 0;

    while (start <= end) {
        sum += start; // Add current number to sum
        start++;      // Move to the next number
    }

    cout << "The sum of whole numbers from 20 to 25 is: " << sum << endl;

    return 0;
}