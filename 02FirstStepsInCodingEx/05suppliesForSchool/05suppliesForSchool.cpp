#include <iostream>

using namespace std;

int main() {

	double boxPens = 5.8;
	double boxMarkers = 7.2;
	double solutionPerLiter = 1.2;

	int numberPens;
	int numberMarkers;
	int solutionLitres;
	int discount;

	double totalPricePens;
	double totalPriceMarkers;
	double totalPriceSolution;
	double totalPrice;
	double discountedPrice;

	cin >> numberPens;
	cin >> numberMarkers;
	cin >> solutionLitres;
	cin >> discount;

	double discountPercentage = discount / 100.0;

	totalPricePens = numberPens * boxPens;
	totalPriceMarkers = numberMarkers * boxMarkers;
	totalPriceSolution = solutionLitres * solutionPerLiter;

	totalPrice = totalPricePens + totalPriceMarkers + totalPriceSolution;

	discountedPrice = totalPrice - (totalPrice * discountPercentage);

	cout << discountedPrice << endl;
	return 0;
}