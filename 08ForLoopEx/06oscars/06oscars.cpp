#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string actorName;
	getline(cin, actorName);

	double academyPoints;
	cin >> academyPoints;

	int juryCount;
	cin >> juryCount;
	cin.ignore();


	cout.setf(ios::fixed);
	cout.precision(1);
	for (int jury = 1; jury <= juryCount; jury++) {

		string juryName;
		getline(cin, juryName);

		double juryPoints;
		cin >> juryPoints;
		cin.ignore();

		academyPoints += (juryName.length() * juryPoints) / 2.0;

		if (academyPoints > 1250.5)
		{
			cout << "Congratulations, " << actorName << " got a nominee for leading role with " << academyPoints << "!" << endl;
			break;
		}
	}

	if (academyPoints <= 1250.5)
	{
		cout << "Sorry, " << actorName << " you need " << (1250.5 - academyPoints) << " more!" << endl;
	}
	return 0;
}