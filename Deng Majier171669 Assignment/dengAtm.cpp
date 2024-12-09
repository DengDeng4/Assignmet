#include <iostream>
using namespace std;

int main() {
    double balance, withdrawalAmount, dailyLimit;
//collecting information
    cout << "Enter your account balance: ";
    cin >> balance;

    cout << "Enter the withdrawal amount: ";
    cin >> withdrawalAmount;

    cout << "Enter the daily withdrawal limit: ";
    cin >> dailyLimit;

    if (withdrawalAmount > balance) {
        cout << "Insufficient funds in your account." << endl;
    } else if (withdrawalAmount > dailyLimit) {
        cout << "The withdrawal amount exceeds your daily limit." << endl;
    } else {
        balance -= withdrawalAmount;
        //output
        cout << "Withdrawal successful. Your new balance is $" << balance << "." << endl;
    }

    return 0;
}