#include <iostream>
#include <string>

using namespace std;

int main()
{
	int juryCount;
	cin >> juryCount;
	cin.ignore();
	string presentationName;
	double totalGrade = 0;
	int presentationCount = 0;
	while (true)
	{
		getline(cin, presentationName);
		if (presentationName == "Finish")
		{
			break;
		}
		double presentationGrade = 0;
		for (int i = 0; i < juryCount; ++i)
		{
			double grade;
			cin >> grade;
			cin.ignore();
			presentationGrade += grade;
		}
		presentationGrade /= juryCount;
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << presentationName << " - " << presentationGrade << "." << endl;
		totalGrade += presentationGrade;
		presentationCount++;
	}
	cout << "Student's final assessment is " << totalGrade / presentationCount << "." << endl;
	return 0;
}
