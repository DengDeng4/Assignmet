#include <iostream>
#include <string>
using namespace std;

int main() {
    //declairing variables
    string fullName, course;
    int score;

    // Ask user to insert information
    cout << "Enter the full name of the student: ";
    getline(cin, fullName);
    cout << "Enter the course name: ";
    getline(cin, course);
    cout << "Enter the score: ";
    cin >> score;

    // Getting the grade according to the points aquired
    char grade;
    if (score >= 70) {
        grade = 'A';
    } else if (score >= 60) {
        grade = 'B';
    } else if (score >= 50) {
        grade = 'C';
    } else if (score >= 40) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Output the result
    cout << "The full name of the student is: " << fullName << endl;
    cout << "The course is: " << course << endl;
    cout << "The grade is: " << grade << endl;

    return 0;
}