#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName;

    string lastName;

    string favoriteMeal;
    
    string favoriteMovie;

    // Take in user details
    cout << "Insert your First Name: ";
    getline(cin, firstName);
    cout << "Insert your Last Name: ";
    getline(cin, lastName);
    cout << "Insert your Favorite Meal: ";
    getline(cin, favoriteMeal);
    cout << "Insert your Favorite Movie: ";
    getline(cin, favoriteMovie);

    //Show user profile
    cout << "\nUser Profile:\n";
    cout << "1st Name: " << firstName << "\n";
    cout << "2nd Name: " << lastName << "\n";
    cout << "Full Name: " << firstName << " " << lastName << "\n";
    cout << "Fav Meal: " << favoriteMeal << "\n";
    cout << "Fav Movie: " << favoriteMovie << "\n";

    return 0;
}