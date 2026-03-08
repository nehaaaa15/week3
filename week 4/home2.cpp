#include <iostream>
using namespace std;

int main() {
    int speed;

    cout << "Enter the speed of the car: ";
    cin >> speed;

    if (speed > 100) {
        cout << "The car was speeding. Challan issued" << endl;
    } 
    else {
        cout << "The car is following the speed limit." << endl;
    }

    return 0;
}