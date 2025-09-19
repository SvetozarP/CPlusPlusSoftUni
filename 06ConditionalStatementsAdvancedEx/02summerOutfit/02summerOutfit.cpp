#include <iostream>
#include <string>

using namespace std;

int main()
{
    int degreeInput;
    string timeOfDay;

    cin >> degreeInput >> timeOfDay;

    string outfit;
    string shoes;

    if (timeOfDay == "Morning") {

        if (degreeInput >= 10 && degreeInput <= 18) {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        }
        else if (degreeInput > 18 && degreeInput <= 24) {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (degreeInput >= 25) {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }

    }
    else if (timeOfDay == "Afternoon") {

        if (degreeInput >= 10 && degreeInput <= 18) {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (degreeInput > 18 && degreeInput <= 24) {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else if (degreeInput >= 25) {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }

    }
    else if (timeOfDay == "Evening") {
        
        if (degreeInput >= 10) {
            outfit = "Shirt";
            shoes = "Moccasins";
        }

    }

    cout << "It's " << degreeInput << " degrees, get your " << outfit << " and " << shoes << "." << endl;
    return 0;

}
