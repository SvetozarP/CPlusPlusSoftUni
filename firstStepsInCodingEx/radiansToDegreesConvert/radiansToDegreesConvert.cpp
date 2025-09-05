#include <iostream>
#include <math.h>
using namespace std;

int main() {

	double PI = 3.14;
	int constConvertValue = 180;
	double radians;
	double degrees;

	cin >> radians;

	degrees = radians * constConvertValue / PI;

	cout << round(degrees) << endl;

	return 0;
}