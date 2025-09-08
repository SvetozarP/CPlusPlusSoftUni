#include <iostream>

using namespace std;

int main()
{
	double sqMPrice = 7.61;
	double discountOffer = 0.18;
	double inputMetersToGreen;
	double finalPrice;
	double discountFromPrice;
	double discountedPrice;

	cin >> inputMetersToGreen;

	finalPrice = inputMetersToGreen * sqMPrice;
	discountFromPrice = finalPrice * discountOffer;
	discountedPrice = finalPrice - discountFromPrice;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "The final price is: " << discountedPrice << " lv." << endl;
	cout << "The discount is: " << discountFromPrice << " lv." << endl;
	return 0;
}