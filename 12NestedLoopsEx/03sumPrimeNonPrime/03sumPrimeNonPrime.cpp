#include <iostream>
#include <string>

using namespace std;

int main()
{
	string number;
	int primeSum = 0;
	int nonPrimeSum = 0;

	while (true)
	{
		getline(cin, number);
		if (number == "stop")
		{
			break;
		}
		int num = stoi(number);
		if (num < 0)
		{
			cout << "Number is negative." << endl;
			continue;
		}
		bool isPrime = true;
		if (num == 0 || num == 1)
		{
			isPrime = false;
		}
		else
		{
			for (int i = 2; i <= num / 2; ++i)
			{
				if (num % i == 0)
				{
					isPrime = false;
					break;
				}
			}
		}
		if (isPrime)
		{
			primeSum += num;
		}
		else
		{
			nonPrimeSum += num;
		}
	}
	cout << "Sum of all prime numbers is: " << primeSum << endl;
	cout << "Sum of all non prime numbers is: " << nonPrimeSum << endl;
	return 0;
}
