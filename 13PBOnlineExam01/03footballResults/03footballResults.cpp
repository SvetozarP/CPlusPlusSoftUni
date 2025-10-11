#include <iostream>
#include <string>

using namespace std;

int main()
{
	string result1, result2, result3;

	int won = 0;
	int draw = 0;
	int lost = 0;

	cin >> result1 >> result2 >> result3;

	if (result1[0] > result1[2]) {
		won++;
	}
	else if (result1[0] == result1[2]) {
		draw++;
	}
	else {
		lost++;
	}
	if (result2[0] > result2[2]) {
		won++;
	}
	else if (result2[0] == result2[2]) {
		draw++;
	}
	else {
		lost++;
	}
	if (result3[0] > result3[2]) {
		won++;
	}
	else if (result3[0] == result3[2]) {
		draw++;
	}
	else {
		lost++;
	}
	cout << "Team won " << won << " games." << endl;
	cout << "Team lost " << lost << " games." << endl;
	cout << "Drawn games: " << draw << endl;
	return 0;
}
