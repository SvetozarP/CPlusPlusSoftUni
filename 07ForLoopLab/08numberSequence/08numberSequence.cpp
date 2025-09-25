#include <iostream>

using namespace std;

int main()
{
	int numberCount;
	cin >> numberCount;
	int smallest, largest;
	for (int i = 0; i < numberCount; i++)
	{
		int currentNumber;
		cin >> currentNumber;
		if (i == 0)
		{
			smallest = currentNumber;
			largest = currentNumber;
		}
		else
		{
			if (currentNumber < smallest)
			{
				smallest = currentNumber;
			}
			if (currentNumber > largest)
			{
				largest = currentNumber;
			}
		}
	}
	cout << "Max number: " << largest << endl;
	cout << "Min number: " << smallest << endl;
	return 0;

}
