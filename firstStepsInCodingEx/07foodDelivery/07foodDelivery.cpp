#include <iostream>

using namespace std;

int main() {

	double priceChickenMenu = 10.35;
	double priceFishMenu = 12.4;
	double priceVegetarianMenu = 8.15;

	double priceDelivery = 2.5;
	double desertPriceModifier = 0.2;

	int countChickenMenu;
	int countFishMenu;
	int countVegMenu;

	cin >> countChickenMenu;
	cin >> countFishMenu;
	cin >> countVegMenu;

	double totalMenuPrice;
	double totalOrderPrice;

	totalMenuPrice =
		(priceChickenMenu * countChickenMenu) +
		(priceFishMenu * countFishMenu) +
		(priceVegetarianMenu * countVegMenu);

	double desertPrice = totalMenuPrice * desertPriceModifier;

	totalOrderPrice = totalMenuPrice + desertPrice + priceDelivery;

	cout << totalOrderPrice << endl;
	return 0;
}