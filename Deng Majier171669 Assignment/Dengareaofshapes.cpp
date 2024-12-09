#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double radius, length, width, base, height;

    do {
        // Display the menu
        cout << "Select an option:" << endl;
        cout << "1. Calculate the area of a circle" << endl;
        cout << "2. Calculate the area of a rectangle" << endl;
        cout << "3. Calculate the area of a triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Perform the selected operation
        switch (choice) {
            case 1:
                // Calculate the area of a circle
                cout << "Enter the radius : ";
                cin >> radius;
                cout << "The area of the circle is: " << 22/7 * radius * radius << endl;
                break;
            case 2:
                // Calculate the area of a rectangle
                cout << "Enter the length : ";
                cin >> length;
                cout << "Enter the width : ";
                cin >> width;
                cout << "The area : " << length * width << endl;
                break;
            case 3:
                // Calculate the area of a triangle
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "The area of the triangle is: " << 0.5 * base * height << endl;
                break;
            case 4:
                // Quit
                cout << "Leaving program" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}