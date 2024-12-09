#include <iostream>
using namespace std;

int main() {
    int age;
    string movieType;
    double ticketPrice;
//Ask user to insert age
    cout << "Enter your age: ";
    cin >> age;
//Ask user to insert movie type
    cout << "Enter the movie type (regular or 3D): ";
    cin >> movieType;
//Pric of ticket according to age and movie type
    if (age < 12) {
        if (movieType == "regular") {
            ticketPrice = 8.00;
        } else if (movieType == "3D") {
            ticketPrice = 10.00;
        } else {
            cout << "Invalid movie type." << endl;
            return 1;
        }
    } else if (age >= 12 && age <= 64) {
        if (movieType == "regular") {
            ticketPrice = 12.00;
        } else if (movieType == "3D") {
            ticketPrice = 15.00;
        } else {
            cout << "Invalid movie type." << endl;
            return 1;
        }
        //Price accordinng to movie tupe
    } else {
        if (movieType == "regular") {
            ticketPrice = 10.00;
        } else if (movieType == "3D") {
            ticketPrice = 12.00;
        } else {
            cout << "Invalid movie type." << endl;
            return 1;
        }
    }
    //output

    cout << "The ticket price for a " << movieType << " movie is $" << ticketPrice << "." << endl;

    return 0;
}