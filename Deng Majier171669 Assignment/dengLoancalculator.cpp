#include <iostream>
using namespace std;

//Conditioons
bool isCustomerQualified(int age, double bankBalance, std::string crbStatus, int customerDuration) {
    if (age < 22) {
        return false;
    }
    if (bankBalance < 50000) {
        return false;
    }
    if (crbStatus != "good") {
        return false;
    }
    if (customerDuration < 6) {
        return false;
    }

    return true;
}
//collecting info
int main() {
    int age = 25;
    double bankBalance = 60000.0;
    std::string crbStatus = "good";
    int customerDuration = 12;

    bool isQualified = isCustomerQualified(age, bankBalance, crbStatus, customerDuration);

    if (isQualified) {
        std::cout << "Customer is qualified for the loan." << std::endl;
    } else {
        std::cout << "Customer is not qualified for the loan." << std::endl;
    }

    return 0;
}