#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string figureInput;
	cin >> figureInput;
	double result;

	if (figureInput == "square") {

		double sideInput;
		cin >> sideInput;

		result = pow(sideInput, 2);

	}
	else if (figureInput == "rectangle") {

		double sideAInput, sideBInput;
		cin >> sideAInput >> sideBInput;

		result = sideAInput * sideBInput;

	}
	else if (figureInput == "circle") {

		const double PI = 3.14159265359;
		double radiusInput;
		cin >> radiusInput;

		result = PI * pow(radiusInput, 2);

	}
	else if (figureInput == "triangle") {

		double sideInput, heightInput;
		cin >> sideInput >> heightInput;

		result = (sideInput * heightInput) / 2;

	}

	cout.setf(ios::fixed);
	cout.precision(3);

	cout << result << endl;

	return 0;
}
