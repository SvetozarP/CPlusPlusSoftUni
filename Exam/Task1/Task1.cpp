#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int videoCardPrice, adapterPrice;
	double electricityPerDayPerCard, cardProfitDay;
	cin >> videoCardPrice >> adapterPrice >> electricityPerDayPerCard >> cardProfitDay;

	int countCards = 13;
	int countAdapters = 13;
	double otherCosts = 1000.00;

	int totalVideoCardPrice = videoCardPrice * countCards;
	int totalAdapterPrice = adapterPrice * countAdapters;
	int totalSpends = totalVideoCardPrice + totalAdapterPrice + otherCosts;


	double profitPerCardPerDay = cardProfitDay - electricityPerDayPerCard;
	double totalProfitPerDay = profitPerCardPerDay * countCards;
	double daysToCoverCosts = ceil(totalSpends / totalProfitPerDay);


	cout << totalSpends << endl;
	cout << daysToCoverCosts << endl;
	return 0;

}
