#include <iostream>

using namespace std;

int main()
{
	int userInput;
	cin >> userInput;

	int sum = 0;

	for (int i = 1; i <= userInput; i++)
	{
		int numberToAdd;
		cin >> numberToAdd;
		sum += numberToAdd;
	}

	cout << sum << endl;
	return 0;
}
