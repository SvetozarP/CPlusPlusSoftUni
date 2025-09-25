#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int lillyAge;
	double washingMachinePrice;
	int toyPrice;
	
	cin >> lillyAge >> washingMachinePrice >> toyPrice;

	int currentMoney = 10;

	int moneyFromToys = 0;
	int moneyFronmBirthdays = 0;

	for (int i = 1; i <= lillyAge; i++) {
		if (i % 2 == 0) {
			moneyFronmBirthdays += currentMoney;
			moneyFronmBirthdays -= 1;
			currentMoney += 10;
		}
		else {
			moneyFromToys += toyPrice;
		}
	}

	cout << fixed << setprecision(2);
	if (moneyFromToys + moneyFronmBirthdays >= washingMachinePrice) {
		cout << "Yes! " << (moneyFromToys + moneyFronmBirthdays - washingMachinePrice) << endl;
	}
	else {
		cout << "No! " << (washingMachinePrice - moneyFromToys - moneyFronmBirthdays) << endl;
	}
	return 0;
}
