#include <iostream>

using namespace std;

int main()
{
	int pointsInput;
	cin >> pointsInput;
	double bonusPoints;
	


	if (pointsInput <= 100) {
		bonusPoints = 5.0;
	}
	else if (pointsInput > 1000) {
		bonusPoints = pointsInput * 0.1;
	}
	else {
		bonusPoints = pointsInput * 0.2;
	}

	if (pointsInput % 2 == 0) {
		bonusPoints += 1;
	}

	if (pointsInput % 10 == 5) {
		bonusPoints += 2;
	}

	cout << bonusPoints << endl;
	cout << pointsInput + bonusPoints << endl;

	return 0;
}