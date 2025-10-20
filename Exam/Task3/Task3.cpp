#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string month, timeDay;
	int hoursSpent, countPeople;
	cin >> month >> hoursSpent >> countPeople >> timeDay;

	double pricePerPerson = 0.0;

	if (month == "march" || month == "april" || month == "may")
	{
		if (timeDay == "day")
		{
			pricePerPerson = 10.50;
		}
		else if (timeDay == "night")
		{
			pricePerPerson = 8.40;
		}
	}
	else if (month == "june" || month == "july" || month == "august")
	{
		if (timeDay == "day")
		{
			pricePerPerson = 12.60;
		}
		else if (timeDay == "night")
		{
			pricePerPerson = 10.20;
		}
	}

	double totalPrice = pricePerPerson * countPeople * hoursSpent;
	if (countPeople >= 4)
	{
		totalPrice *= 0.90;
	}
	if (hoursSpent >= 5)
	{
		totalPrice *= 0.50;
	}
	cout << fixed << setprecision(2) << "Price per person for one hour: " << totalPrice / countPeople / hoursSpent << endl;
	cout << fixed << setprecision(2) << "Total cost of the visit: " << totalPrice << endl;
	return 0;
}
