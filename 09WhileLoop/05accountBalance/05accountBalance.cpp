#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main()
{
	double sum = 0;
	double userNum;

	while (true)
	{
		string userInput;
		cin >> userInput;

		if (userInput == "NoMoreMoney")
		{
			break;
		}
		else {
			userNum = stod(userInput);
			if (userNum < 0)
			{
				cout << "Invalid operation!" << endl;
				break;
			}
			else
			{
				sum += userNum;
				cout << fixed << setprecision(2) << "Increase: " << userNum << endl;
			}
		}
	}

	cout << fixed << setprecision(2) << "Total: " << sum << endl;
	return 0;
}
