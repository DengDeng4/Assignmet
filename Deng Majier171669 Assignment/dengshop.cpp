#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, discountedAmount, discount;

    cout << "Enter the purchase amount: ";
    cin >> purchaseAmount;
//Dertemine discout applied
    if (purchaseAmount >= 500) {
        discount = 0.20;
    } else if (purchaseAmount >= 200) {
        discount = 0.10;
    } else if (purchaseAmount >= 100) {
        discount = 0.05;
    } else {
        discount = 0;
    }

    discountedAmount = purchaseAmount - (purchaseAmount * discount);
//Output
    cout << "The original purchase amount was $" << purchaseAmount << "." << endl;
    cout << "The discount applied is " << (discount * 100) << "%, which is $" << (purchaseAmount * discount) << "." << endl;
    cout << "The final amount to pay is $" << discountedAmount << "." << endl;

    return 0;
}