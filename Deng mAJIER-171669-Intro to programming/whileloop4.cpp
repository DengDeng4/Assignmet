#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctPassword = "password123"; // Set correct password
    string userInput;                      // Store user input
    int attempts = 0;                      // Count of wrong attempts

    while (attempts < 3) {
        cout << "Enter the password: ";
        cin >> userInput;

        if (userInput == correctPassword) {
            cout << "Access Granted!" << endl;
            return 0; // Exit the program if password is correct
        } else {
            attempts++;
            cout << "Wrong password. Try again." << endl;
        }
    }

    // If the user enters the wrong password 3 times
    cout << "Password Blocked!" << endl;

    return 0;
}