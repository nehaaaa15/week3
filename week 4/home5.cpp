#include <iostream>
using namespace std;

int main() {
    int holidays;
    int workingDays;
    int playTime;
    int norm = 30000;

    cout << "Enter number of holidays: ";
    cin >> holidays;

    workingDays = 365 - holidays;

    playTime = (workingDays * 63) + (holidays * 127);

    int difference = abs(norm - playTime);

    int hours = difference / 60;
    int minutes = difference % 60;

    if (playTime > norm) {
        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << minutes << " minutes more for play" << endl;
    }
    else {
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes << " minutes less for play" << endl;
    }

    return 0;
}