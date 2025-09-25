#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int countOpenTabs;
	double salary, pricePerTab;
	cin >> countOpenTabs >> salary;

	for (int i = 0; i < countOpenTabs; i++)
	{
		string website;
		cin >> website;
		if (website == "Facebook")
			salary -= 150;
		else if (website == "Instagram")
			salary -= 100;
		else if (website == "Reddit")
			salary -= 50;
		if (salary <= 0)
		{
			salary = 0;
			break;
		}
	}

	if (salary <= 0) {
		cout << "You have lost your salary." << endl;
	}
	else {
		cout << fixed << setprecision(0) << salary << endl;
	}
	return 0;
}
