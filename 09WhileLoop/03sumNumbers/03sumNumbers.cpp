#include <iostream>

using namespace std;

int main()
{
	int firstNumber;
	cin >> firstNumber;

	int secondNumber;

	int sum = 0;

	while (sum < firstNumber)
	{
		cin >> secondNumber;
		sum += secondNumber;
		
	}

	cout << sum << endl;
	return 0;
}
