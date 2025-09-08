#include <iostream>
using namespace std;

int main()
{
	string nameInput;
	int numberProjects;
	int hoursPerProject = 3;
	int totalHours;

	cin >> nameInput;
	cin >> numberProjects;
	totalHours = numberProjects * hoursPerProject;

	cout << "The architect " << nameInput << " will need " << totalHours << " hours to complete " << numberProjects << " project/s.";
	return 0;
}