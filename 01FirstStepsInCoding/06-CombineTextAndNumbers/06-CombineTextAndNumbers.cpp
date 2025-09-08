#include <iostream>
using namespace std;

int main()
{
	string firstNameInput;
	string lastNameInput;
	int ageInput;
	string townInput;

	cin >> firstNameInput;
	cin >> lastNameInput;
	cin >> ageInput;
	cin >> townInput;

	cout << "You are " << firstNameInput << " " << lastNameInput
		<< ", a " << ageInput << "-years old person from " << townInput << ".";
	return 0;
}