#include <iostream>
using namespace std;
 main() {
    int temp1, temp2;

    cout << "Enter temperature of City 1: ";
    cin >> temp1;

    cout << "Enter temperature of City 2: ";
    cin >> temp2;

    int difference = abs(temp1 - temp2);

    if (difference > 10) {
        cout << "Difference is too Big" << endl;
    }
    else {
        cout << "Difference is within the limit" << endl;
    }

    return 0;
}