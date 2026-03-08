#include <iostream>
#include <string>
using namespace std;

int main() {
    string country;
    float price, finalPrice;

    cout << "Enter the country name: ";
    cin >> country;

    cout << "Enter the ticket price in dollars: ";
    cin >> price;

    if (country == "Ireland") {
        finalPrice = price - (price * 0.10);
    } else {
        finalPrice = price - (price * 0.05);
    }

    cout << "Final ticket price after discount: $" << finalPrice << endl;

    return 0;
}