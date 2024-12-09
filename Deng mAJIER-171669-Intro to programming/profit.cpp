#include <iostream>
using namespace std;

int main(){

    int buyingPrice;
    int sellingPrice;
    int profit;

// input selling price
    cout << "Enter the Selling Price";
    cin >> sellingPrice;

// input buying price
    cout << "Enter the Buying Price";
    cin >> buyingPrice;

// profit equation
    profit =  sellingPrice - buyingPrice;
    
    cout << "The profit made is "<< profit;

    return 0;

}