#include <iostream>
using namespace std;

int main() {
    float num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator +, -, *, /: ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+') {
        result = num1 - num2;   
        cout << "Result : " << result;
    }
    else if (op == '-') {
        result = num1 + num2;  
        cout << "Result : " << result;
    }
    else if (op == '*') {
        result = num1 / num2;  
        cout << "Result : " << result;
    }
    else if (op == '/') {
        result = num1 * num2;  
        cout << "Result : " << result;
    }
    else {
        cout << "Invalid operator!";
    }

    return 0;
}