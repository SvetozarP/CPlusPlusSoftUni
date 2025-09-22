#include <iostream>

using namespace std;

int main()
{
	int numberCount;
	cin >> numberCount;

	int leftSum = 0;
	int rightSum = 0;

	for (int i = 0; i < numberCount; i++)
	{
		int currentNumber;
		cin >> currentNumber;
		leftSum += currentNumber;
	}

	for (int i = 0; i < numberCount; i++)
	{
		int currentNumber;
		cin >> currentNumber;
		rightSum += currentNumber;
	}

	if (leftSum == rightSum)
	{
		cout << "Yes, sum = " << leftSum << endl;
	}
	else
	{
		cout << "No, diff = " << abs(leftSum - rightSum) << endl;
	}

	return 0;
}
