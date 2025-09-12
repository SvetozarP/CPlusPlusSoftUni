#include <iostream>

using namespace std;

int main()
{
    // VC price = 250 / count, processorPrice = totalPriceVC * 0.35 ramPrice = 0.1 * totalPriceVC
    const double videoPrice = 250.0;
    double processorPrice, ramPrice;

    // discount = 0.15 if countVC > countProcessors
    double discountAmount = 0;

    // Inputs
    double budgetInput;
    cin >> budgetInput;

    int countVC, countProc, countRam;
    cin >> countVC >> countProc >> countRam;

    // Calc Prices

    double costVC = countVC * videoPrice;
    processorPrice = costVC * 0.35; // per single
    ramPrice = costVC * 0.1; // per single

    double costProc = countProc * processorPrice;
    double costRam = countRam * ramPrice;

    double totalCost = costVC + costProc + costRam;

    // Calculate discount

    if (countVC > countProc) {
        discountAmount = totalCost * 0.15;
    }

    // Apply discount

    totalCost -= discountAmount;

    // format and output
    cout.setf(ios::fixed);
    cout.precision(2);

    // can be solved with abs too.

    if (budgetInput >= totalCost) {
        cout << "You have " << budgetInput - totalCost << " leva left!" << endl;
    }
    else {
        cout << "Not enough money! You need " << totalCost - budgetInput << " leva more!" << endl;
    }

    return 0;

}
