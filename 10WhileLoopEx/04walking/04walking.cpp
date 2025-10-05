#include <iostream>
#include <string>

using namespace std;

int main()
{
	int targetSteps = 10000;
	int totalSteps = 0;
	string input;
	while (totalSteps < targetSteps)
	{
		getline(cin, input);
		if (input == "Going home")
		{
			int stepsToHome;
			cin >> stepsToHome;
			totalSteps += stepsToHome;
			break;
		}
		else
		{
			int steps = stoi(input);
			totalSteps += steps;
		}
	}
	if (totalSteps >= targetSteps)
	{
		cout << "Goal reached! Good job!" << endl;
	}
	else
	{
		cout << targetSteps - totalSteps << " more steps to reach goal." << endl;
	}
	return 0;
}
