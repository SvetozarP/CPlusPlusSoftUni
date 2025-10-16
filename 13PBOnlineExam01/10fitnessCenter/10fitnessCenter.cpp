#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int guestsCount;
	cin >> guestsCount;

	int backCount = 0;
	int chestCount = 0;
	int legsCount = 0;
	int absCount = 0;
	int shakeCount = 0;
	int barCount = 0;
	for (int i = 0; i < guestsCount; i++)
	{
		string activity;
		getline(cin >> ws, activity);
			
		if (activity == "Back")
		{
			backCount++;
		}
		else if (activity == "Chest")
		{
			chestCount++;
		}
		else if (activity == "Legs")
		{
			legsCount++;
		}
		else if (activity == "Abs")
		{
			absCount++;
		}
		else if (activity == "Protein shake")
		{
			shakeCount++;
		}
		else if (activity == "Protein bar")
		{
			barCount++;
		}
	}
	cout << backCount << " - back" << endl;
	cout << chestCount << " - chest" << endl;
	cout << legsCount << " - legs" << endl;
	cout << absCount << " - abs" << endl;
	cout << shakeCount << " - protein shake" << endl;
	cout << barCount << " - protein bar" << endl;
	double trainingCount = backCount + chestCount + legsCount + absCount;
	double eatingCount = shakeCount + barCount;
	double trainingPercentage = (trainingCount / guestsCount) * 100;
	double eatingPercentage = (eatingCount / guestsCount) * 100;
	cout << fixed << setprecision(2) << trainingPercentage << "%" << " - work out" << endl;
	cout << fixed << setprecision(2) << eatingPercentage << "%" << " - protein" << endl;
	return 0;
}