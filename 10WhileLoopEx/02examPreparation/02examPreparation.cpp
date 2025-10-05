#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int badGrades;
	cin >> badGrades;
	int badGradesCount = 0;
	int sumGrades = 0;
	int countGrades = 0;
	string lastProblem;
	while (badGradesCount < badGrades)
	{
		string problem;
		getline(cin >> ws, problem);
		
		if (problem == "Enough")
		{
			double averageScore = static_cast<double>(sumGrades) / countGrades;
			cout << fixed << setprecision(2);
			cout << "Average score: " << averageScore << endl;
			cout << "Number of problems: " << countGrades << endl;
			cout << "Last problem: " << lastProblem << endl;
			return 0;
		}
		int grade;
		cin >> grade;
		if (grade <= 4)
		{
			badGradesCount++;
		}
		sumGrades += grade;
		countGrades++;
		lastProblem = problem;
	}
	cout << "You need a break, " << badGradesCount << " poor grades." << endl;
	return 0;

}
