#include <iostream>

using namespace std;

int main() {

	int annualTrainingCost;

	cin >> annualTrainingCost;

	double shoeCost = annualTrainingCost - (annualTrainingCost * 0.4);
	double attireCost = shoeCost - (shoeCost * 0.2);
	double ballCost = attireCost * 0.25;
	double accessoriesCost = ballCost * 0.2;
	double totalCost;

	totalCost = shoeCost + attireCost + ballCost + accessoriesCost + annualTrainingCost;

	cout << totalCost << endl;

	return 0;
}