#include <iostream>

int main() {
    using namespace std;
    string childName;
    int age;

    cout << "Please enter the child's name: ";
    getline(cin, childName);
    cout << "Please enter the child's age: ";
    cin >> age;

    if (age >= 7) {
        cout << childName << " has been Admit to Grade School." << endl;
    } else if (age >= 5) {
        cout << childName << " has been Admit to Kindergarten." << endl;
    } else if (age >= 3) {
        cout << childName << " has been Admit to Pre-School." << endl;
    } else if (age >= 1) {
        cout << childName << " has been Admit to Playgroup." << endl;
    } else {
        cout << childName << " is not eligible for school admission." << endl;
    }

    return 0;
}