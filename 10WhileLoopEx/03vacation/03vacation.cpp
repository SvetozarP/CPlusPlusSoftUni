#include <iostream>

using namespace std;

int main()
{
	double vacationCost;
	cin >> vacationCost;
	double availableMoney;
	cin >> availableMoney;

	int spendDays = 0;
	int totalDays = 0;

	while (availableMoney < vacationCost && spendDays < 5)
	{
		string action;
		cin >> action;
		double amount;
		cin >> amount;
		if (action == "save")
		{
			availableMoney += amount;
			spendDays = 0;
			totalDays++;
		}
		else if (action == "spend")
		{
			availableMoney -= amount;
			if (availableMoney < 0)
			{
				availableMoney = 0;
			}
			spendDays++;
			totalDays++;
		}
	}
	if (spendDays == 5)
	{
		cout << "You can't save the money." << endl;
		cout << totalDays << endl;
	}
	else
	{
		cout << "You saved the money for " << totalDays << " days." << endl;
	}
	return 0;

}