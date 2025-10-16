#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
 
	int tournamentCount, startPoints;
	cin >> tournamentCount >> startPoints;
	int tournamentWins = 0;
	int pointsFromTournaments = 0;

	for (int i = 0; i < tournamentCount; i++)
	{
		string stage;
		cin >> stage;
		if (stage == "W")
		{
			pointsFromTournaments += 2000;
			tournamentWins++;
		}
		else if (stage == "F")
		{
			pointsFromTournaments += 1200;
		}
		else if (stage == "SF")
		{
			pointsFromTournaments += 720;
		}
	}
	double averagePoints = pointsFromTournaments / (double)tournamentCount;
	double percentageWins = (tournamentWins / (double)tournamentCount) * 100;
	cout << "Final points: " << startPoints + pointsFromTournaments << endl;
	cout << "Average points: " << fixed << setprecision(0) << floor(averagePoints) << endl;
	cout << fixed << setprecision(2) << percentageWins << "%" << endl;
	return 0;
}