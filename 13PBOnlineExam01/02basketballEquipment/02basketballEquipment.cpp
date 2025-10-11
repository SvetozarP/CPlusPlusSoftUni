#include <iostream>

using namespace std;

int main()
{
    int annualFee;
	cin >> annualFee;

	double sneakersPrice = annualFee - (annualFee * 0.4);
	double outfitPrice = sneakersPrice - (sneakersPrice * 0.2);
	double ballPrice = outfitPrice / 4;
	double accessoriesPrice = ballPrice / 5;
	double total = annualFee + sneakersPrice + outfitPrice + ballPrice + accessoriesPrice;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << total << endl;
	return 0;
}
