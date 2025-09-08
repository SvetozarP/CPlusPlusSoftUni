#include <iostream>
using namespace std;

int main() {

	double costOfUsd = 1.79549;
	double USDAmountInput;
	double BGNamount;
	
	cin >> USDAmountInput;

	cout.setf(ios::fixed);
	cout.precision(2);

	BGNamount = USDAmountInput * costOfUsd;

	cout << BGNamount << endl;
	return 0;
}