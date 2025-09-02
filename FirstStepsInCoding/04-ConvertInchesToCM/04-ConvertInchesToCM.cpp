#include <iostream>
using namespace std;

int main()
{
	double factorToCm = 2.54;
	double userInputInch;
	double convertedCM;

	cin >> userInputInch;
	convertedCM = userInputInch * factorToCm;

	cout << convertedCM;
	return 0;
}