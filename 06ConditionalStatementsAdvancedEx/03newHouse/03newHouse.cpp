#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string flowerType;
    int countFlower;
    int budget;

    cin >> flowerType >> countFlower >> budget;

    double flowerPrice = 0.0;
    double discount = 0.0;
    double flowerTotal = 0.0;
    double totalPrice = 0.0;

    if (flowerType == "Roses") {
        flowerPrice = 5.0;
        if (countFlower > 80) {
            discount = 0.1;
        }
    }
    else if (flowerType == "Dahlias") {
        flowerPrice = 3.8;
        if (countFlower > 90) {
            discount = 0.15;
        }
    }
    else if (flowerType == "Tulips") {
        flowerPrice = 2.8;
        if (countFlower > 80) {
            discount = 0.15;
        }
    }
    else if (flowerType == "Narcissus") {
        flowerPrice = 3.0;
        if (countFlower < 120) {
            discount = -0.15;
        }
    }
    else if (flowerType == "Gladiolus") {
        flowerPrice = 2.5;
        if (countFlower < 80) {
            discount = -0.2;
        }
    }

    flowerTotal = countFlower * flowerPrice;
    totalPrice = flowerTotal - flowerTotal * discount;

    

    if (budget >= totalPrice) {
        cout << fixed 
            << setprecision(2)
            << "Hey, you have a great garden with "
            << countFlower
            << " "
            << flowerType
            << " and "
            << budget - totalPrice
            << " leva left."
            << endl;
    }
    else {
        cout << fixed 
            << setprecision(2)
            << "Not enough money, you need "
            << totalPrice - budget
            << " leva more."
            << endl;
    }
    
    return 0;
}
