#include <iostream>
using namespace std;

int main() {

	double depositedSum;
	int depositTerm;
	double AnnualDepositRate;

	double naturalRate;
	double resultEndOfTerm;
	double monthlyRateValue;
	
	int totalMonths = 12;
	cin >> depositedSum;
	cin >> depositTerm;
	cin >> AnnualDepositRate;

	naturalRate = depositedSum * AnnualDepositRate / 100;
	monthlyRateValue = naturalRate / totalMonths;
	resultEndOfTerm = depositedSum + depositTerm * monthlyRateValue;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << resultEndOfTerm << endl;
	return 0;
}