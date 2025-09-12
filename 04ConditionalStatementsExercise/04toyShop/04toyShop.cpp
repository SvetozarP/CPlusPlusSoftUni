#include <iostream>

using namespace std;

int main()
{
    // Const - toy prices
    double puzzlePrice = 2.6;
    double talkingDollPrice = 3.0;
    double plushBearPrice = 4.1;
    double minionPrice = 8.2;
    double truckPrice = 2.0;

    // Input

    double vacationPrice;
    cin >> vacationPrice;

    int countPuzzle, countTalkingDolls, countPlushBears, countMinions, countTrucks;
    cin >> countPuzzle >> countTalkingDolls >> countPlushBears >> countMinions >> countTrucks;

    int totalToys = countPuzzle + countTalkingDolls + countPlushBears + countMinions + countTrucks;

    // Calculate income and total
    double totalPuzzle = countPuzzle * puzzlePrice;
    double totalTalkingDoll = countTalkingDolls * talkingDollPrice;
    double totalPlushBear = countPlushBears * plushBearPrice;
    double totalMinion = countMinions * minionPrice;
    double totalTrucks = countTrucks * truckPrice;

    double incomeNoDiscount = totalPuzzle + totalTalkingDoll + totalPlushBear + totalMinion + totalTrucks;

    // Discount and rent
    double discountAmount = 0.0;
    

    if (totalToys >= 50) {
        discountAmount = incomeNoDiscount * 0.25;
    }

    double incomeWithDiscount = incomeNoDiscount - discountAmount;

    double rentPrice = incomeWithDiscount * 0.1;

    double incomeWithDiscountLessRent = incomeWithDiscount - rentPrice;

    // Vacation comparison

    cout.setf(ios::fixed);
    cout.precision(2);

    if (vacationPrice <= incomeWithDiscountLessRent) {
        cout << "Yes! " << incomeWithDiscountLessRent - vacationPrice << " lv left." << endl;
    }
    else {
        cout << "Not enough money! " << vacationPrice - incomeWithDiscountLessRent << " lv needed." << endl;
    }

    return 0;
}
