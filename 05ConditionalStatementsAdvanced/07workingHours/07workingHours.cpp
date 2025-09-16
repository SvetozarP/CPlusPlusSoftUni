#include <iostream>
#include <string>

using namespace std;

int main()
{
    int hourWork;
    string dayOfWeek;

    cin >> hourWork >> dayOfWeek;

    if (dayOfWeek == "Sunday") {
        cout << "closed";
    }
    else if (
        dayOfWeek == "Monday" ||
        dayOfWeek == "Tuesday" ||
        dayOfWeek == "Wednesday" ||
        dayOfWeek == "Thursday" ||
        dayOfWeek == "Friday" ||
        dayOfWeek == "Saturday"
        ) {

        if (hourWork >= 10 && hourWork <= 18) {

            cout << "open" << endl;

        }
        else {
            
            cout << "closed" << endl;

        }

    }

    return 0;
}
