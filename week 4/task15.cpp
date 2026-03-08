#include <iostream>
using namespace std;

int main() {
    float amount, discount, final;

    cout << "Enter total purchase amount: ";
    cin >> amount;

    if (amount <= 5000) {
        discount = amount * 0.05;   
    } 
    else {
        discount = amount * 0.10;   
    }

    final= amount - discount;

    cout << "Discount: Rs " << discount << endl;
    cout << "Final Amount to Pay: Rs " << final << endl;

    return 0;
}