#include <iostream>
using namespace std;

int main() {
    int monthly = 10000;
    int laptopPrice = 50000;
    int months = 6;

    float advance;
    int requiredMonths;

    advance = monthly * 0.5 * months;
    cout << "Total advance salary available: Rs " << advance << endl;

    if (advance>= laptopPrice) {
        cout << "Ali can buy the laptop with the advanced salary." << endl;
    } 
    else {
        cout << "Ali cannot buy the laptop with the advanced salary." << endl;
        requiredMonths = laptopPrice / (monthly * 0.5);

        if (laptopPrice % (int)(monthly * 0.5) != 0) {
            requiredMonths++;
        }

        cout << "He needs advance salary for at least " 
             << requiredMonths << " months to buy the laptop." << endl;
    }

    return 0;
}