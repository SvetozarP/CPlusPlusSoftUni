#include <iostream>

using namespace std;

int main()
{
	int startRange, endRange, magicNumber;
	cin >> startRange >> endRange >> magicNumber;
	int counter = 0;
	for (int i = startRange; i <= endRange; i++) {
		for (int j = startRange; j <= endRange; j++)
		{
			counter++;
			if (i + j == magicNumber)
			{
				cout << "Combination N:" << counter << " (" << i << " + " << j << " = " << magicNumber << ")" << endl;
				return 0;
			}
		}
	}
	cout << counter << " combinations - neither equals " << magicNumber << endl;
	return 0;
}
