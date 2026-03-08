#include <iostream>
using namespace std;

int main() {
    int redRoses, whiteRoses, tulips;
    float totalPrice, finalPrice;

    cout << "Enter number of Red Roses: ";
    cin >> redRoses;

    cout << "Enter number of White Roses: ";
    cin >> whiteRoses;

    cout << "Enter number of Tulips: ";
    cin >> tulips;

    totalPrice = (redRoses *2.00 ) + (whiteRoses * 4.10) + (tulips * 2.50);

    cout << "Original Price: $" << totalPrice << endl;

    if (totalPrice > 200) {
        finalPrice = totalPrice - (totalPrice * 0.20);
        cout << "20% Discount Applied" << endl;
        cout << "Final Payable Amount: $" << finalPrice << endl;
    }
    else {
        cout << "No discount applied." << endl;
        cout << "Final Payable Amount: $" << totalPrice << endl;
    }

    return 0;
}