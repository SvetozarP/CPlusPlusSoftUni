#include <iostream>
#include <string>

using namespace std;


int main()
{
    string number1;
	string number2;

	cin >> number1 >> number2;

	for (int i = stoi(number1); i <= stoi(number2); i++)
	{
		int sumEven = 0;
		int sumOdd = 0;
		string currentNumber = to_string(i);
		for (int j = 0; j < currentNumber.length(); j++)
		{
			if (j % 2 == 0)
			{
				sumEven += currentNumber[j] - '0';
			}
			else
			{
				sumOdd += currentNumber[j] - '0';
			}
		}
		if (sumEven == sumOdd)
		{
			cout << currentNumber << " ";
		}
	}

	return 0;
}