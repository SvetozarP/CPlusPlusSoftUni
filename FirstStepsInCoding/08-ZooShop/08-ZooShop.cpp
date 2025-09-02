#include <iostream>
using namespace std;

int main()
{
	double dogFoodPrice = 2.50;
	double catFoodPrice = 4.00;
	int inputDogFoodCount;
	int inputCatFoodCount;
	
	cin >> inputDogFoodCount;
	cin >> inputCatFoodCount;

	double dogFoodTotalPrice = dogFoodPrice * inputDogFoodCount;
	double catFoodTotalPrice = catFoodPrice * inputCatFoodCount;

	double totalPrice = dogFoodTotalPrice + catFoodTotalPrice;

	cout.setf(ios::fixed);
	cout.precision(1);

	cout << totalPrice << " lv." << endl;
	return 0;

}