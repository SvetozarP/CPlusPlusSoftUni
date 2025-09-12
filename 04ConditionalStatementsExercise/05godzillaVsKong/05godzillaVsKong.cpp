#include <iostream>

using namespace std;

int main()
{
    // decorPrice = budget * 0.1
    double decorPrice;
    // more than 150 people discountClothing -= discountClothing * 0.1
    double discountClothing = 0;

    // Inputs

    double movieBudget;
    cin >> movieBudget;

    int peopleNumber;
    cin >> peopleNumber;

    double oneClothingPrice;
    cin >> oneClothingPrice;

    // Clothing price

    double totalClothing = peopleNumber * oneClothingPrice;

    // clothing Discount

    if (peopleNumber > 150) {
        discountClothing = totalClothing * 0.1;
    }

    totalClothing -= discountClothing;

    // Decor price

    decorPrice = movieBudget * 0.1;

    // Expense

    double totalExpense = decorPrice + totalClothing;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (movieBudget >= totalExpense) {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << movieBudget - totalExpense << " leva left." << endl;
    }
    else {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << totalExpense - movieBudget << " leva more." << endl;
    }

    return 0;
}
