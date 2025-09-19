#include <iostream>
#include <string>

using namespace std;

int main()
{
    int budget, fishermanCount;
    string seasonIn;
    cin >> budget >> seasonIn >> fishermanCount;

    double discount = 0.0;
    double additionalDiscount = 0;
    double boatPrice = 0.0;

    if (fishermanCount <= 6) {
        discount = 0.1;
    }
    else if (fishermanCount >= 7 && fishermanCount <= 11) {
        discount = 0.15;
    }
    else if (fishermanCount >= 12) {
        discount = 0.25;
    }

    if (fishermanCount % 2 == 0 && seasonIn != "Autumn") {
        additionalDiscount = 0.05;
    }

    if (seasonIn == "Spring") {
        boatPrice = 3000.0;
    }
    else if (seasonIn == "Summer" || seasonIn == "Autumn") {
        boatPrice = 4200.0;
    }
    else if (seasonIn == "Winter") {
        boatPrice = 2600.0;
    }

    boatPrice -= boatPrice * discount;
    boatPrice -= boatPrice * additionalDiscount;
    
    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget >= boatPrice) {
        
        cout << "Yes! You have "
            << budget - boatPrice
            << " leva left."
            << endl;

    }
    else {

        cout << "Not enough money! You need "
            << boatPrice - budget
            << " leva."
            << endl;
    }

    return 0;
}
