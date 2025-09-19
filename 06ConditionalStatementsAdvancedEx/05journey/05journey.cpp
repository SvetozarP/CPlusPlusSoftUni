#include <iostream>
#include <string>

using namespace std;

int main()
{
    double budget;
    string seasonIn;

    cin >> budget >> seasonIn;

    string destination;
    double spend;
    string typeVacation;

    if (budget <= 100) {
        destination = "Bulgaria";
        
        if (seasonIn == "summer") {
            spend = budget * 0.3;
            typeVacation = "Camp";
        }
        else if (seasonIn == "winter") {
            spend = budget * 0.7;
            typeVacation = "Hotel";
        }

    }
    else if (budget <= 1000) {
        destination = "Balkans";

        if (seasonIn == "summer") {
            spend = budget * 0.4;
            typeVacation = "Camp";
        }
        else if (seasonIn == "winter") {
            spend = budget * 0.8;
            typeVacation = "Hotel";
        }
    }
    else if (budget > 1000) {
        destination = "Europe";
        spend = budget * 0.9;
        typeVacation = "Hotel";
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Somewhere in " << destination << endl;
    cout << typeVacation << " - " << spend << endl;
    return 0;
}