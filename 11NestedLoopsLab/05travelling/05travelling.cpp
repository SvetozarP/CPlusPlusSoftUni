#include <iostream>
#include <string>

using namespace std;

int main()
{

	while (true)
	{
		// Input
		string destination;
		double budget;

		cin >> destination >> budget;
		double savedMoney = 0;

		// Process
		if (destination == "End")
		{
			return 0;
		}
		while (savedMoney < budget)
		{
			string money;
			cin >> money;

			if (money == "End")
			{
				return 0;
			}
			double moneyDouble = stod(money);
			savedMoney += moneyDouble;
		}
		// Output
		cout << "Going to " << destination << "!" << endl;

	}
	return 0;
}
