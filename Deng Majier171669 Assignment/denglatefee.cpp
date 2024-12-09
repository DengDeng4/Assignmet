#include <iostream>
#include <string>
using namespace std;

int main() {
    int daysLate;
    string bookType;
    double lateFee;

    cout << "insert delayed duration: ";
    cin >> daysLate;

    cout << "Enter type of book ): ";
    cin >> bookType;

    if (bookType == "Normal") {
        if (daysLate <= 7) {
            lateFee = 0.50 * daysLate;
        } else if (daysLate <= 14) {
            lateFee = 1.00 * daysLate;
        } else {
            lateFee = 2.00 * daysLate;
        }
    } else if (bookType == "Kid's") {
        if (daysLate <= 7) {
            lateFee = 0.25 * daysLate;
        } else if (daysLate <= 14) {
            lateFee = 0.50 * daysLate;
        } else {
            lateFee = 1.00 * daysLate;
        }
    } else if (bookType == "Reference") {
        if (daysLate <= 7) {
            lateFee = 1.00 * daysLate;
        } else if (daysLate <= 14) {
            lateFee = 2.00 * daysLate;
        } else {
            lateFee = 5.00 * daysLate;
        }
    } else {
        cout << "Invalid book type." << endl;
        return 1;
    }

    cout << "The late fee for the " << bookType << " book returned " << daysLate << " days late is $" << lateFee << "." << endl;

    return 0;
}