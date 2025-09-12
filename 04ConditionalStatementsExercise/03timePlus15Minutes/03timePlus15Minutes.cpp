#include <iostream>

using namespace std;

int main()
{
    int startHours, startMinutes;
    cin >> startHours >> startMinutes;

    int minutes = startHours * 60 + startMinutes;

    minutes += 15;

    int finalHours = minutes / 60;
    int finalMinutes = minutes % 60;

    if (finalHours >= 24) {
        finalHours -= 24;
    }

    if (finalMinutes < 10) {
        cout << finalHours << ":0" << finalMinutes << endl;
    }
    else {
        cout << finalHours << ":" << finalMinutes << endl;
    }

    return 0;
}
