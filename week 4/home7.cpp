#include <iostream>
using namespace std;

int main() {
    string figure;
    double area;

    cout << "Enter the type of figure (square, rectangle, circle, triangle): ";
    cin >> figure;

    if (figure == "square") {
        double s;
        cout << "Enter the side length: ";
        cin >> s;
        area = s * s;
    }
    else if (figure == "rectangle") {
        double l, w;
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;
        area = l * w;
    }
    else if (figure == "circle") {
        double r;
        const double pi = 3.14159;
        cout << "Enter radius: ";
        cin >> r;
        area = pi * r * r;
    }
    else if (figure == "triangle") {
        double b, h;
        cout << "Enter base: ";
        cin >> b;
        cout << "Enter height: ";
        cin >> h;
        area = 0.5 * b * h;
    }

    cout << "Area = " << area << endl;

    return 0;
}