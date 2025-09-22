#include <iostream>

using namespace std;

int main()
{
	int numberCount;
	cin >> numberCount;

	int evenSum = 0;
	int oddSum = 0;

	for (int i = 1; i <= numberCount; i++)
	{
		int currentNumber;
		cin >> currentNumber;
		if (i % 2 == 0)
		{
			evenSum += currentNumber;
		}
		else
		{
			oddSum += currentNumber;
		}
	}

	if (evenSum == oddSum)
	{
		cout << "Yes" << endl;
		cout << "Sum = " << evenSum << endl;
	}
	else
	{
		cout << "No" << endl;
		cout << "Diff = " << abs(evenSum - oddSum) << endl;
	}

	return 0;

}
