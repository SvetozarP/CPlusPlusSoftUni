#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string name;
	cin >> name;
	double grade;
	int gradeCount = 0;
	double gradeSum = 0.0;

	int toExclude = 0;

	while (gradeCount < 12)
	{
		cin >> grade;
		if (grade >= 4.00)
		{
			gradeSum += grade;
			gradeCount++;
		}
		else
		{
			toExclude++;
			if (toExclude > 1)
			{
				cout << name << " has been excluded at " << gradeCount + 1 << " grade" << endl;
				return 0;
			}
		}

	}
	cout << fixed << setprecision(2);
	cout << name << " graduated. Average grade: " << gradeSum / 12 << endl;
	return 0;
}
