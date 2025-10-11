#include <iostream>

using namespace std;

int main()
{
    int minutesControl, secondsControl, seconds100m;
	double distance;
	cin >> minutesControl >> secondsControl >> distance >> seconds100m;

	double decreaseTimes = (distance / 120) * 2.5;

	double totalTime = (minutesControl * 60) + secondsControl;
	double martinTime = (distance / 100) * seconds100m - decreaseTimes;

	if (martinTime <= totalTime) {
		cout << "Marin Bangiev won an Olympic quota!" << endl;
		cout.setf(ios::fixed);
		cout.precision(3);
		cout << "His time is " << martinTime << "." << endl;
	}
	else {
		cout << "No, Marin failed! He was " ;
		cout.setf(ios::fixed);
		cout.precision(3);
		cout << martinTime - totalTime << " second slower." << endl;
	}
	return 0;
}
