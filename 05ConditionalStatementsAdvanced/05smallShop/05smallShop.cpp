#include <iostream>
#include <string>

using namespace std;

int main()
{
    string productIn, cityIn;
    double qtyIn;
    
    double costOut;
    double totalCost;

    cin >> productIn >> cityIn >> qtyIn;

    if (cityIn == "Sofia") {

        if (productIn == "coffee") {
            costOut = 0.5;
        }
        else if (productIn == "water") {
            costOut = 0.8;
        }
        else if (productIn == "beer") {
            costOut = 1.2;
        }
        else if (productIn == "sweets") {
            costOut = 1.45;
        }
        else if (productIn == "peanuts") {
            costOut = 1.6;
        }

    }
    else if (cityIn == "Plovdiv") {

        if (productIn == "coffee") {
            costOut = 0.4;
        }
        else if (productIn == "water") {
            costOut = 0.7;
        }
        else if (productIn == "beer") {
            costOut = 1.15;
        }
        else if (productIn == "sweets") {
            costOut = 1.3;
        }
        else if (productIn == "peanuts") {
            costOut = 1.5;
        }

    }
    else if(cityIn == "Varna") {

        if (productIn == "coffee") {
            costOut = 0.45;
        }
        else if (productIn == "water") {
            costOut = 0.7;
        }
        else if (productIn == "beer") {
            costOut = 1.1;
        }
        else if (productIn == "sweets") {
            costOut = 1.35;
        }
        else if (productIn == "peanuts") {
            costOut = 1.55;
        }

    }

    totalCost = qtyIn * costOut;

    cout << totalCost << endl;

    return 0;
}
